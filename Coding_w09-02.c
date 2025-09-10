#include <stdio.h>   //include haeder

int main (){   //main function

    int sum, p, x, y;                               //declare integer variables
    sum = 0;                                        //make sum equal to 0

    for (x = 1, y = 1; x * y <= 15; x++, y += 2)      //for loop with two control variables
    {
        p = x * y;                                    //make p as the product of x and y
        sum = sum + p;                               //add p to sum
        printf ("%d * %d = %d\n", x, y, p);           //display the result of x * y 
    }

    printf ("Summation of x * y = %d\n", sum);            //display the summation of x * y of all loops

    return 0;                                             //indicate that program ended successfully
}

//Description: inline 5 we declare integer variables
//             inline 6 we initialize sum to 0
//             inline 8 we use a for loop to made x and y start at 1 
//             while the result of x * y is less than or equal to 15 we increase x by 1 and y by 2
//             inline 10 we make p as the product of x and y
//             inline 11 we add p to sum
//             inline 12 we print the values of x, y and p
//              the 1st loop will show the x as a coumting number that mulyiply with y as odd numbers and p is a result of x * y
//              the second loop we icrsease x by 1 and y by 2 then multiply them and show the result 
//              in the 3rd loop we icrsease x by 1 and y by 2 then multiply them and show the result which is 3 * 5 = 15 so it will stop here
//              because the next loop will be 4 * 7 = 28 which is greater than 15
//              in the loop we keep adding the result of p to sum to show the summation of x * y in all loops which is 1 + 6 + 15 = 22
//             inline 15 we print the summation of x * y