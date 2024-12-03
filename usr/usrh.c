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
    FILE *filerw;
    filerw = fopen(drec,"w");
    if(filerw == NULL){
        perror("error opening file");
        return;
    }
    fprintf(filerw,cont);
    fclose(filerw);
}

char rfile(char drec[]){
    FILE *filer;
    filer = fopen(drec,"r");
    char op[999999];
    fgets(op,999999,filer);
    fclose(filer);
}
