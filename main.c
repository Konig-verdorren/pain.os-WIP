#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include </home/pavnox/os/plant/kernel/kernel.c>
#include </home/pavnox/os/plant/usr/usrh.c>

int main(){
    //terminal clear
	system("clear");
	//setup  logo var
	char logo[1248] = "  #############                                                                                       \n##################          ###########            ####     ####                                      \n####          ####        ###############          ####     #############                             \n####          ####       ####          ####                 ################                          \n##################                     ####        ####     ####         ####                         \n################            ###############        ####     ####         ####                         \n####                      #################        ####     ####         ####                  ####   \n####                     ####          ####        ####     ####         ####           ##    ##      \n####                     ####      ########        ####     ####         ####         ##  ##    ##    \n####                     ############# ####        ####     ####         ####     ##  ##  ##      ##  \n####                       ########    ####        ####     ####         ####     ##    ##     ####   \n______________________________________________________________________________________________________\n";
	//opening shit
	printf("%s",logo);
    kernel();
	rescalc();
	resalo();
    usrh();
	sleep(3);
	system("clear");
	printf("%s",logo);
    return 0;
}