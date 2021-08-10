
int reset(char controller[20], char url[20]){
    char yesNo;

    printf("Are you sure? \n");
    printf("[Y] : Yes \t [N] :No \n" );
    scanf(" %c", &yesNo);
    if(yesNo == 'Y' || yesNo == 'y'){
        printf("Resetting...\n");
        clearFile(controller, url);
        printf("Resetting completed...\n");
        return 0;
        }
    else{
        printf("Canceled.\n");
        return 0;
        }
        
        
};

