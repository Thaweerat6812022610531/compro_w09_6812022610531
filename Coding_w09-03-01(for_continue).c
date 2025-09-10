#include <stdio.h>             //include header

int main(){                     //main function

    int i;                        //declare integer variable i
    for (i = 1; i <= 10; i++)     //for loop to increase i by 1 from 1 to 10
    {
        if (i == 6){                    //if i is equal to 6, do the following
            continue;                   //skip the loop when i is 6 and continue to the next loop
        }
        printf ("%d ", i);                //display the value of i
    }
    return 0;                          //indicate that program ended successfully
}

//Description: inline 5 we declare integer variable i
//             inline 6 we use a for loop to make i start at 1 and increase by 1 until it reaches 10
//             inline 8 we use an if statement to check if i is equal to 6
//             inline 9 if i is 6 we use continue to skip the loop and go to the next loop
//             inline 11 we print the value of i in each loop except when i is 6
//              the first loop will make i = 1 and check if i is lessor equal to 10, since it is not it will increase i by 1 
//              and check if i is 6, since it is not it will print 1
//              if i is equal to 6 the if statement will be true and it will skip the loop and not print 6
//              the loop will continue until i is increased to 10 and print all values except 6