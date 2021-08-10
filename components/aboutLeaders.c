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
            readFile("./files/leaders/Sher Bahadur Deuba.txt", 1, NULL, NULL);
            break;
        case 2:
            readFile("./files/leaders/Puspa Kamal Dahal.txt", 1, NULL, NULL);
            break;
        case 3:
            readFile("./files/leaders/KP Oli.txt", 1, NULL, NULL);
            break;
        case 4:
            readFile("./files/leaders/Baburam Bhattarai.txt", 1, NULL, NULL);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid input\n");
            break;
        }
     
    printf("\nDo you want to read about other leaders?(y for yes and n for no)\n");
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

    
    