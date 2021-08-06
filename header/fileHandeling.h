#include<stdio.h>
#include<stdlib.h>

void readFile(char url[20]){
    FILE *fp;
    char ch[120];

    fp = fopen(url, "r");
    printf(" The name of file is %s", url);
    if (fp == NULL) {
        printf("File Cannt be open");
        exit(1);
    };
    
    printf("\n"); // new line
    while (fgets(ch, 120, fp) != NULL) {
        printf("%s", ch);
    }
    printf("\n"); // new line

    fclose(fp);
}