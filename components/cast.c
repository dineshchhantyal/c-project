
int castVote(){
    unsigned int voterID, id, leaderCode, numberOfLeader;
    char leaderName[50][20], conformation;
    printf("Please Enter Voter Id :");
    scanf("%u",&voterID);

    FILE *fp = fopen("./files/voters.txt","r");
    if(fp == NULL){
        printf("Trouble Identifing Voter ID ");
        return -1;
    }
    while (fscanf(fp,"%u",&id) != EOF){
        if(voterID == id){
            printf("Voter ID : %u is already registered ! \n",voterID);
            return -1;
        }
    }
    fclose(fp);
    printf("S.N \t Leader");
    readFile("./files/leaderNames.txt", 1, leaderName, &numberOfLeader); //showCount = 1 
    printf("\n");
    printf("Select the leader using S.N : ");
    scanf("%u",&leaderCode);

      
    printf("You Voted For Leader : %s ? \n",leaderName[leaderCode-1]);

    printf("[Y] : Confirm \t [N] : Decline \n");
    scanf(" %c",&conformation);
    if(checkYesNo(conformation) != 0){
        printf("Vote Cancelled");
        return -1;
        }
    else{
        
        if (addVote(leaderName[leaderCode-1]) == 0){
            addID(voterID);
            printf("\n \n ---- VOTE succed! --- \n");
        }
        else printf("VOTE Failed! \n");
    }
}