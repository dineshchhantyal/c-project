#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,loop=1;
    char ask;
    while (loop)
    {
        putchar('\n');
        FILE *content = fopen("aboutLeaders.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        printf("\nType a number corresponding to the leader you want to read about\n");
        scanf("%d",&num);
        putchar('\n');
        if (num == 1)
        {
            FILE *content = fopen("C:\\Users\\ASUS\\Desktop\\c-project\\files\\leaders\\Sher Bahadur Deuba.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        }

        else if (num == 2)
        {
            FILE *content = fopen("C:\\Users\\ASUS\\Desktop\\c-project\\files\\leaders\\Puspa Kamal Dahal.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        }
        
        else if (num == 3)
        {
            FILE *content = fopen("C:\\Users\\ASUS\\Desktop\\c-project\\files\\leaders\\KP Oli.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        }
        else if (num == 4)
        {
            FILE *content = fopen("C:\\Users\\ASUS\\Desktop\\c-project\\files\\leaders\\Baburam Bhattarai.txt","r");

        if(content == NULL)
        {
            perror("Unable to open the file");
            exit(1);
        }
        char line[100];
        while(fgets(line,sizeof(line),content))
            {
                printf("%s",line);
            }
        }
        else if (num ==5)
        {
            loop = 0;
        }
        

        else
            {
            printf("Please press a valid key!");
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
    
        FILE *content = fopen("C:\\Users\\ASUS\\Desktop\\c-project\\files\\aboutLeaders.txt","r");

    if(content == NULL)
    {
        perror("Unable to open the file");
        exit(1);
    }
    char line[100];
    while(fgets(line,sizeof(line),content))
        {
            printf("%s",line);
        }
    
    return 0;
}   

    
    