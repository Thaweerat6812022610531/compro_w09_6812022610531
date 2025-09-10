#include <stdio.h>             //include header

int main(){                     //main function
    int i;                      //declare integer variable i
    i = 0;                     //make i equal to 0
                           
   do                                  //do while loop
   { 
        i++;                            //increase i by 1
        if (i == 6){                    //if i is equal to 6, do the following                                  
            continue;                   //skip the loop when i is 6 and continue to the next loop
        }
        printf ("%d ", i);               //display the value of i
   } 
    while (i <= 9);                      //while loop if i is less than or equal to 9
   
   
    return 0;                          //indicate that program ended successfully
}

//Description: inline 4 we declare integer variable i
//             inline 5 we make i equal to 0
//             inline 7 we use a do while loop to increase i by 1 in each loop
//             inline 10 we use an if statement to check if i is equal to 6
//             inline 11 if i is 6 we use continue to skip the loop and go to the next loop
//             inline 13 we print the value of i in each loop except when i is 6
//             inline 15 we check if i is less than or equal to 9
//              the first loop will increase i by 1 making i = 1 and check if i is 6, since it is not it will print 1
//              then it will check if i is less than or equal to 9 and since it is true it will continue the loop