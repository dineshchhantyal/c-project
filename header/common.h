
// check length of string and return 1 if too long

int validEntry(int entry, int max){
    if(entry < 1 || entry > max){
        printf("Value out of range");
        return 0;
    }
    return 1;
}

// this is kind of boolean checking if user enters yes[y] or no[n]

int checkYesNo(char intput){
    if (intput == 'y' || intput == 'Y') return 0;
    else return 1;
}

// cprinf(color, string)
// color is the color of the text, we are using RGYP only for now
// string is the string we want to print


void cprintf(char color[], char txt[]){
    if (color == "r" || color == "R" ) printf("\033[1;31m");
    if (color == "g" || color == "G" ) printf("\033[0;32m");;
    if (color == "y" || color == "Y" ) printf("\033[0;33m");
    if (color == "p" || color == "P" ) printf("\033[0;35m");
    printf(txt);
    printf("\033[0m");
}
