#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int  usrh(){
    printf("|usr handler: A\n");
    FILE *rhashwP;
    rhashwP = fopen("/home/pavnox/os/plant/usr/root/hash","w");
    if (rhashwP == NULL) {
        perror("Error opening file");
    }
    srand(time(NULL));
    fprintf(rhashwP,"%d",rand() % (32767 - 1 + 1) + 1);
    fclose(rhashwP);
    printf("________________\n");
    return 0;
}

void wnfile(char drec[], char cont[]){
    FILE *fptr;
    fptr = fopen(drec,"w");
    if(fptr == NULL){
        perror("error opening file");
        return;
    }
    fprintf(fptr,cont);
    fclose(fptr);
}

char *rfile(const char drec[]) {
    FILE *fptr = fopen(drec, "r");
    if (fptr == NULL) {
        perror("Error opening file");
        return NULL;
    }

    char *otpt = malloc(32767 * sizeof(char));
    if (otpt == NULL) {
        perror("Memory allocation failed");
        fclose(fptr);
        return NULL;
    }

    size_t length = 0;
    char line[32767]; 

    while (fgets(line, sizeof(line), fptr)) {
        size_t line_len = strlen(line);
        if (length + line_len >= 32767) {
            fprintf(stderr, "File too large to fit in buffer\n");
            free(otpt);
            fclose(fptr);
            return NULL;
        }
        strcpy(otpt + length, line);
        length += line_len;
    }

    fclose(fptr);
    return otpt; 
}
