#include<stdio.h>
#include "./header/common.h"
#include "./header/fileHandeling.h"
#include "./components/reset.c"
#include "./components/cast.c"

void main(){
    // castVote();
    // readFile("./files/controller/resetController.txt", -1);
    reset("./files/controller/resetController.txt", "./files/leaders/"); // reset the file BASED ON FILE NAME OF CONTROLLER
}

