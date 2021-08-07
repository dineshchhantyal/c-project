#include<stdio.h>
#include "./header/common.h"
#include "./header/fileHandeling.h"
#include "./components/clear.c"

void main(){
    printf("%d",sum(1,2));
    readFile("./files/controller/leaderControl.txt");
    clear("./files/controller/leaderControl.txt", "./files/leaders/"); // clear the file BASED ON FILE NAME OF CONTROLLER
}

