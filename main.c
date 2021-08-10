#include<stdio.h>
#include "./header/common.h"
#include "./header/fileHandeling.h"
#include "./components/reset.c"

void main(){
    printf("%d",sum(1,2));
    readFile("./files/controller/leaderControl.txt");
    reset("./files/controller/leaderControl.txt", "./files/leaders/"); // reset the file BASED ON FILE NAME OF CONTROLLER
}

