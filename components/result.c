int shift();

int result(){
    FILE *result;
    int r1,r2,r3,r4, yesNo;

    printf("\t\t    Result!!!!!");
    
    result=fopen("./files/votes/Baburam Bhattarai.txt","r");
       if (result==NULL){
           printf("\n\n FIle can't be open.");
           exit(1);
       }
       if (fscanf(result,"%d",&r1)==EOF){
           printf("\n\n NO votes are casted for Baburam Bhattarai.");
           r1=0;
       }
       else{
           while (fscanf(result,"%d",&r1) !=EOF);
           printf("\n\n The number of vote obtained by Baburam Bhattarai is %d.",r1);
       }
    fclose(result);

    result=fopen("./files/votes/KP Oli.txt","r");
       if (result==NULL){
           printf("\n FIle can't be open.");
           exit(1);
       }
       if (fscanf(result,"%d",&r2)==EOF){
           printf("\n NO votes are casted for KP Oli.");
           r2=0;
       }
       else{
           while (fscanf(result,"%d",&r2) !=EOF);
           printf("\n The number of vote obtained by KP Oli is %d.",r2);
       }
    fclose(result);

    result=fopen("./files/votes/Puspa Kamal Dahal.txt","r");
       if (result==NULL){
           printf("\n FIle can't be open.");
           exit(1);
       }
       if (fscanf(result,"%d",&r3)==EOF){
           printf("\n NO votes are casted for Pushpa Kamal Dahal.");
           r3=0;
       }
       else{
           while (fscanf(result,"%d",&r3) !=EOF);
           printf("\n The number of vote obtained by Pushpa Kamal Dahal is %d.",r3);
       }
    fclose(result);

    result=fopen("./files/votes/Sher Bahadur Deuba.txt","r");
       if (result==NULL){
           printf("\n FIle can't be open.");
           exit(1);
       }
       if (fscanf(result,"%d",&r4)==EOF){
           printf("\n NO votes are casted for Sher Bahadur Deuba.");
           r4=0;
       }
       else{
           while (fscanf(result,"%d",&r4) !=EOF);
           printf("\n The number of vote obtained by Sher Bahadur Deuba is %d.",r4);
       }
    fclose(result);
    
    if (r1>r2 && r1>r3 && r1>r4)
        printf("\n\n\t    Baburam Bhattarai won the election.");
    else if (r2>r1 && r2>r3 && r2>r4)
        printf("\n\n\t    KP Oli won the election.");
    else if (r3>r1 && r3>r2 && r3>r4)
        printf("\n\n\t    PUSHPA Kamal Dahal won the election.");
    else if (r4>r1 && r4>r2 && r4>r3)
        printf("\n\n\t    Sher Bahadur Deuba won the election."); 
    else
        printf("\n\n\t\tThe election is draw.");
    
    printf("\n \n \n  Back To Home ? \n [Y] : Yes \t [N] : No \n : -> ");
    scanf(" %c", &yesNo);
    if (checkYesNo(yesNo) == 0) shift();

    return 0;  
}