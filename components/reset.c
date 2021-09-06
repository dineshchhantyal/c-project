
int reset(char controller[20], char url[20]){
    char yesNo, masterPin[20];

    printf("Are you sure? \n");
    printf("[Y] : Yes \t [N] :No \n" );
    scanf(" %c", &yesNo);
    // enter the master pin code
    // ***
    
    if(yesNo == 'Y' || yesNo == 'y'){
            cprintf("g", "Enter the MASTER PIN : ");
            scanf("%s", &masterPin);

            if (strcmp(masterPin, "pin1234") == 0){
                cprintf("y","Resetting...\n");
                clearFile(controller, url);
                sleep(0.5);
                cprintf("g","\n Resetting completed...\n");
                sleep(1);
                return 0;
            }
        else{
            printf("Wrong master pin code\n");
            sleep(1);
            return 1;
        }
        }
    else{
        printf("Canceled.\n");
        sleep(1);
        return 0;
        }        
};

