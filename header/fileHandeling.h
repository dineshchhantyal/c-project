// readFile(url, showCount, array, arraySize)
// url = file url
// showCount = "0" if you want to show the count of the lines
// array = push every element to this array
// arraySize = the size of the array

int readFile(char url[20], int showCount, char list[50][20],int *arrayLength){
    FILE *fp;
    char ch[120];
    int count = 1;

    fp = fopen(url, "r");
    if (fp == NULL) {
        perror("File Cannt be open");
        return 1;
    };
    
    printf("\n"); // new line
    while (fgets(ch, 120, fp) != NULL) {
        
        if (showCount==0) {
            if (ch[strlen(ch) - 1] == '\n') {
                ch[strlen(ch) - 1] = '\0';
            } 
            printf("%d. \t", count);
            strcpy(list[count-1], ch);
            count++;
            *arrayLength = count - 1 ;
        }
        printf("%s", ch);
        printf("\n");
    }

    count = 1;
    printf("\n"); // new line
    fclose(fp);
    return 0;
}

// clearFile(controller_url, url)
// controller_url = the url of the controller file, this include which file are to be cleared
// url = base path for all the files

int clearFile( char controller_url[20], char url[20]){
    FILE *controller, *files;
    char ch[120], temp_filename[20] = {"\0"}, temp_baseurl[20];
    strcpy(temp_baseurl,url);

    controller = fopen(controller_url, "r");
    if (controller == NULL) {
        printf("File Cannt be open");
        return 1;
    };
    
    while (fgets(ch, 120, controller) != NULL) {
        strcpy(temp_filename, ch);
        //  if temp_filename contain new line
        if (temp_filename[strlen(temp_filename)-1] == '\n') {
            temp_filename[strlen(temp_filename) - 1] = '\0';
        }
        strcat(temp_filename, ".txt");  
        strcat(temp_baseurl, temp_filename);
        files = fopen(temp_baseurl, "w");

        fprintf(files, "%d", 0);
        strcpy(temp_filename,"");
        strcpy(temp_baseurl,url);   
        fclose(files);
    }
    fclose(controller);
    printf("All files cleared !");
    return 0;
}

// addVote(leaderName)
// leaderName = the name of the leader
// this is dymanic function, it will add the vote to the file
// dont use random leaderName, it is based on file name.

int addVote(char leaderName[50]){
    FILE *leader;
    int numberOfVotes;
    char url[60], vote;
    cprintf("p","\n \n \n ---Adding vote--- \n\n");
    strcpy(url, "./files/votes/");
    strcat(url, leaderName);
    strcat(url, ".txt");

    leader = fopen(url, "r+");
    if (leader == NULL) {
        cprintf("r","File Cannt be open");
        return 1;
    };
    // read int of leaders votes
    fscanf(leader, "%d", &numberOfVotes);
    rewind(leader);
    if (numberOfVotes > 0) numberOfVotes+=1;
    else numberOfVotes = 1;
    fprintf(leader, "%d", numberOfVotes);
    fclose(leader);
    
}

// addID(id)
// id = unique id of voters
// return 1 if id is already exist

int addID(int voterID){
    FILE *voter;

    voter  = fopen("./files/voters.txt", "a");
    if (voter == NULL) {
        cprintf("r","File Cannt be open");
        return 1;
    };
    fprintf(voter,"\n %d", voterID);
    printf("Vote id : %d \n", voterID);
    cprintf("g","successfully registered.");
    fclose(voter);
}