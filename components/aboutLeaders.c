int aboutLeaders()
{
    int num,loop=1;
    char ask;
    while (loop)
    {
        FILE *content = fopen("./files/aboutLeaders.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            return 1;
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        printf("\nType a number corresponding to the leader you want to read about\n");
        scanf("%d",&num);
        putchar('\n');
        switch (num)
        {
        case 1:
            printf("\033[1;31m");
            readFile("./files/leaders/Sher Bahadur Deuba.txt", 1, NULL, NULL);
            break;
        case 2:
            printf("\033[0;32m");
            readFile("./files/leaders/Puspa Kamal Dahal.txt", 1, NULL, NULL);
            break;
        case 3:
            printf("\033[0;33m");
            readFile("./files/leaders/KP Oli.txt", 1, NULL, NULL);
            break;
        case 4:
            printf("\033[0;35m");
            readFile("./files/leaders/Baburam Bhattarai.txt", 1, NULL, NULL);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    printf("\033[0;37m"); 
    printf("\nDo you want to read about other leaders?\n [Y] : Yes \t [N] : No \n : ->\n");
    do
    {
        scanf("%c",&ask);
        if (ask == 'y')
        {
            loop=1;
            break;
        }
        else if (ask == 'n')
        {
            loop =0;
            break;
        }
    }
    while (ask != 'y' || ask != 'n');
    }
     
    return 0;
}   

    
    