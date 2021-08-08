#include<stdio.h>
#include "./header/common.h"
#include "./header/fileHandeling.h"

void main(){
    int option;
    readFile("./files/landingPageInfo.txt");

    printf("Selete One Option");

    scanf("%d", &option);

    switch(option){
        case 1:
            printf("You Chose Option 1");
            break;
        case 2:
            printf("You Chose Option 2");
            break;
        default:
            printf("You Chose Option %d", option);
            break;
    }
}
