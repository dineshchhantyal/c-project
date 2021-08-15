
int validEntry(int entry, int max){
    if(entry < 1 || entry > max){
        printf("Value out of range");
        return -1;
    }
    return 1;
}

int checkYesNo(char intput){
    if (intput == 'y' || intput == 'Y') return 0;
    else return 1;
}


void cprintf(char color[], char txt[]){
    if (color == "r" || color == "R" ) printf("\033[1;31m");
    if (color == "g" || color == "G" ) printf("\033[0;32m");;
    if (color == "y" || color == "Y" ) printf("\033[0;33m");
    if (color == "p" || color == "P" ) printf("\033[0;35m");
    printf(txt);
    printf("\033[0m");
}
