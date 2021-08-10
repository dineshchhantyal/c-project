#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int readFile(char url[20], int showCount, char list[50][20],int *arrayLength){
    FILE *fp;
    char ch[120];
    int count = 1;

    fp = fopen(url, "r");
    if (fp == NULL) {
        printf("File Cannt be open");
        return 1;
    };
    
    printf("\n"); // new line
    while (fgets(ch, 120, fp) != NULL) {
        
        printf("Length %d:", strlen(ch));
        if (ch[strlen(ch) - 1] == '\n') {
            ch[strlen(ch) - 1] = '\0';
        } 
        if (showCount==1) {
            printf("%d. \t", count);
            strcpy(list[count-1], ch);
            count++;
        }
        printf("%s", ch);
        printf("\n");
    }

    *arrayLength = count -1 ;
    count = 1;
    printf("\n"); // new line
    fclose(fp);
    return 0;
}

int clearFile( char controller[20], char url[20]){
    FILE *fp;
    char ch[120], temp_filename[20] = {"\0"}, temp_baseurl[20];
    strcpy(temp_baseurl,url);

    fp = fopen(controller, "r");
    if (fp == NULL) {
        printf("File Cannt be open");
        return 1;
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
    return 0;
}


int addVote(char leaderName[50]){
    FILE *leader;
    long numberOfVotes;
    char url[60], vote;
    printf("\n \n \n ---Adding vote--- \n");
    strcpy(url, "../files/leaders/");
    strcat(url, leaderName);
    strcat(url, ".txt");

    leader = fopen(url, "r+");
    if (leader == NULL) {
        printf("File Cannt be open");
        return 1;
    };
    // read int of leaders votes
    fscanf(leader, "%ld", &numberOfVotes);
    rewind(leader);
    if (numberOfVotes > 0) numberOfVotes+=1;
    else numberOfVotes = 1;
    fprintf(leader, "%ld", numberOfVotes);
    fclose(leader);
    
}

int addID(int voterID){
    FILE *voter;

    printf("The id is %d", voterID);
    voter  = fopen("../files/voters.txt", "a");
    if (voter == NULL) {
        printf("File Cannt be open");
        return 1;
    };
    fprintf(voter,"\n %d", voterID);
    fclose(voter);
}