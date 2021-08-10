#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void readFile(char url[20]){
    FILE *fp;
    char ch[120];

    fp = fopen(url, "r");
    printf(" The name of file is %s", url);
    if (fp == NULL) {
        perror("File Cannt be open");
        exit(1);
    };
    
    printf("\n"); // new line
    while (fgets(ch, 120, fp) != NULL) {
        printf("%s", ch);
    }
    printf("\n"); // new line

    fclose(fp);
}

void clearFile( char controller[20], char url[20]){
    FILE *fp;
    char ch[120], temp_filename[20] = {"\0"}, temp_baseurl[20];
    strcpy(temp_baseurl,url);

    fp = fopen(controller, "r");
    if (fp == NULL) {
        printf("File Cannt be open");
        exit(1);
    };
    
    while (fgets(ch, 120, fp) != NULL) {
        strcpy(temp_filename, ch);
        //  if temp_filename contain new line
        if (temp_filename[strlen(temp_filename)-1] == '\n') {
            temp_filename[strlen(temp_filename) - 1] = '\0';
        }
        strcat(temp_filename, ".txt");  
        strcat(temp_baseurl, temp_filename);
        fclose(fopen(temp_baseurl, "w"));
        strcpy(temp_filename,"");
        strcpy(temp_baseurl,url);   
    }
    fclose(fp);
    printf("All files cleared !");
}

