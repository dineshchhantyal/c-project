#include<stdio.h>
#include<conio.h>

 
     int shift(){
          
          FILE *fp;
          int n;
         first:
          printf("  Enter your choice (1, 2, 3, 4): ");  
          scanf("%d",&n);
   if(n==1)
    fp=fopen("./files/components/AboutLeaders.txt","r");
    int ch,num;
    while((ch=fgetc(fp))!=EOF)
     {
          printf("%c",ch);
     
     }
     printf("\nEnter number(1, 2, 3, 4, 5): ");
     scanf("%d",num);
   if(num==5)
   goto first;
      if(n==2)
    fp=fopen("./files/components/Cast.txt","r");
    while((ch=fgetc(fp))!=EOF)
     {
          printf("%c",ch);
     }
      if(n==3)
    fp=fopen("./files/components/Result.txt","r");
    while((ch=fgetc(fp))!=EOF)
     {
          printf("%c",ch);
     }
return 0;
}