 int shift(){
     int operation, end;

     cprintf("y", "\n \n ************WELCOME TO ONLINE ELECTORAL SYSTEM 2078************ \n \n");
     cprintf("g", "---- Please select any one of the options given below----");
     readFile("./files/landingPageInfo.txt", 1, NULL, NULL);
     printf("Choose 1-4 :");
     scanf("%d", &operation);
     switch (operation)
     {
     case 1:
          aboutLeaders();
          break;
     case 2:
          castVote();
          break;
     case 3:
          result();
          break;
     case 4:
          reset("./files/controller/resetController.txt", "./files/votes/"); // reset the file BASED ON FILE NAME OF CONTROLLER
          break;     
     default:
          end = 0;
          break;
     }
     if (end == 0) return 0;
     else return shift();

 }   
