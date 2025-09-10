#include <stdio.h>             //include header

int main(){                     //main function

    int i;                          //declare integer variable i
    i = 0;                          //make i equal to 0
    while (i <= 9)                  //while loop if i is less than or equal to 9
    {
        i++;                            //increase i by 1    
        if (i == 6){                    //if i is equal to 6, do the following                                  
            continue;                   //skip the loop when i is 6 and continue to the next loop
        }
        
        printf ("%d ", i);                //display the value of i
                                        
    }
    return 0;                          //indicate that program ended successfully
}

//Description: inline 5 we declare integer variable i
//             inline 6 we make i equal to 0
//             inline 7 we use a while loop to check if i is less than or equal to 9
//             inline 9 we increase i by 1 in each loop
//             inline 10 we use an if statement to check if i is equal to 6
//             inline 11 if i is 6 we use continue to skip the loop and go to the next loop
//             inline 14 we print the value of i in each loop
//              the first loop will increase i by 1 making i = 1 and check if i is 6, since it is not it will print 1
//              the loop will continue increasing i by 1 while i is less than or equal to 9 and print the value of i
//              when i is increased to 6 the if statement will be true and it will skip the loop and not print 6
//              the loop will continue until i is increased to 10 and print all values except 6