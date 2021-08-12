
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
void resetColor() {
  printf("\033[0m");
}

void red(char txt[]) {
  printf("\033[1;31m");
  printf(txt);
  resetColor();
}
void green(char txt[]) {
  printf("\033[0;32m");
  printf(txt);
  resetColor();
}
void yellow(char txt[]) {
  printf("\033[0;33m");
  printf(txt);
  resetColor();
}
void purple(char txt[]) {
  printf("\033[0;35m");
  printf(txt);
  resetColor();
}
