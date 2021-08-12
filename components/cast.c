
int castVote(){
    unsigned int voterID, id, leaderCode, numberOfLeader, status = 0;
    char leaderName[50][20], conformation, yesNo;
    green("Please Enter Voter Id :");
    scanf("%u",&voterID);

    FILE *votersFile = fopen("./files/voters.txt","r");
    if(votersFile == NULL){
        printf("Trouble Identifing Voter ID ");
        status =  -1;
    }
    while (fscanf(votersFile,"%u",&id) != EOF){
        if(voterID == id){
            printf("Voter ID : %d is already registered ! \n", voterID);
            status =  -1;
        }
    }
    fclose(votersFile);
    if (status != -1){
        yellow("S.N \t Leader");
        readFile("./files/leaderNames.txt", 0, leaderName, &numberOfLeader); //showCount = 1 
        printf("\n");
        green("Select the leader using S.N : ");
        scanf("%u",&leaderCode);
    
    green("You Voted For Leader : ");
    green(leaderName[leaderCode-1]);
    green("?");

    yellow("\n [Y] : Confirm \t [N] : Decline \n");
    scanf(" %c",&conformation);
    if(checkYesNo(conformation) != 0 && status != -1){
        red("Vote Cancelled");
        }
    else{
        if (addVote(leaderName[leaderCode-1]) == 0 && status != -1){
            addID(voterID);
            green("\n \n ---- VOTE succed! --- \n");
        }
        else red("VOTE Failed! \n");
    }
    }
    yellow("\n\n Do you want to add another vote ? \n \n [Y] : Yes \t [N] : No \n : -> ");
    scanf(" %c", &yesNo);
    if (checkYesNo(yesNo) == 0) castVote();
    else return 0;
}