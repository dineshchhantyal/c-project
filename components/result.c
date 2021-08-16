int result(){
    FILE *result,*fp;
    char leaders[50],name[50];
    int i=0,r[4],win,line;
    printf(" ----------------------Result!!!!-----------------------\n");

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
        win=r[0];
        for (i = 0; i < 4; i++){
            if (win<r[i]){
                win=r[i];
                line=i;
            }
        }
    fclose(result);

    result=fopen("./files/leaderNames.txt","r");
        for (i=0;fscanf(result," %[^\n]",leaders)!=EOF;i++){
            if (i==line)
                printf("\n\n\n\t %s won the election.",leaders);
        }
    fclose(result);

    return 0;   
}