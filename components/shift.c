 int shift(){
     int operation, end;

     sleep(1);
      cprintf("y", "\n\t\t \t**************************************************** ");
     cprintf("y", " \n\n\t\t \t\tWELCOME TO ONLINE ELECTORAL SYSTEM 2078 \n \n");
      cprintf("y", "\t\t \t**************************************************** ");
     sleep(0.2);
     cprintf("g", "\n\n\t\t\t---- Please select any one of the options given below----");
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
          cprintf("g", "\n\t Thank you for using our online system \n \n");
          cprintf("r", "Developer :");
          cprintf("p", " @dineshchhantyal (BCT026), @ashreempandey (BCT014), @lokeshpandey (BCT040), @ManishKunwar(BCT045) \n\n");
          end = 0;
          break;
     }
     if (end == 0) return 0;
     else return shift();
}   
