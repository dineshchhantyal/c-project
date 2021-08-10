#include<stdio.h>
#include "./header/common.h"
#include "./header/fileHandeling.h"
#include "./components/reset.c"

void main(){
    aboutLeaders();
    reset("./files/controller/leaderControl.txt", "./files/leaders/"); // reset the file BASED ON FILE NAME OF CONTROLLER
}

