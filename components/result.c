int result(){
    FILE *result,*fp;
    char leaders[50],name[50];
    int i=0,r[4],win,line;

    printf("\033[1;31m");
    printf(" ----------------------Result!!!!-----------------------\n");
    printf("\033[0m");
    
    printf("\033[0;32m");
    result=fopen("./files/leaderNames.txt","r");
        while(fscanf(result," %[^\n]",leaders)!=EOF){
            char filename[50]="./files/votes/",ext[5]=".txt";
            strcpy(name,leaders);
            strcat(leaders,ext);
            strcat(filename,leaders);
            fp=fopen(filename,"r");
                if (result==NULL){
                    printf("\n\n FIle can't be open.");
                    exit(1);
                }
                else if (fscanf(fp,"%d",&r[i])==EOF){
                    printf("\n\n No votes are casted for %s.",name);
                    r[i]=0;
                }
                else{
                    fscanf(fp,"%d",&r[i]);
                    printf("\n\n The number of vote obtained by %s is %d.",name,r[i]);
                }
            fclose(fp);
            i++;
        }
        printf("\033[0m");
        win=r[0];
        for (i = 0; i < 4; i++){
            if (win<r[i]){
                win=r[i];
                line=i;
            }
        }
        rewind(result);
        for (i=0;fscanf(result," %[^\n]",leaders)!=EOF;i++){
            if (i==line){
                printf("\033[1;33m");
                printf("\n\n\n\t %s won the election.",leaders);
                printf("\033[0m");
            }
        }
    fclose(result);

    return 0;   
}