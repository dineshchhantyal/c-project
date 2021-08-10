
int validEntry(int entry, int max){
    if(entry < 1 || entry > max){
        printf("Value out of range");
        return -1;
    }
    return 1;
}

int checkYesNo(char intput){
    printf("The check %c", intput);
    if (intput == 'y' || intput == 'Y') return 0;
    else return 1;
}