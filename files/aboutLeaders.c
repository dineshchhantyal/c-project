#include<stdio.h>
#include<stdlib.h>

int main()
{
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
    return 0;
}   