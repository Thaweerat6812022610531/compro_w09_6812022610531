#include <stdio.h>      //include standard input output library 

int main() {            //main function begins program execution                 
  
    int start;                    //declare integer variable start
    int stop;                     //declare integer variable stop

    while(1){                        //infinite loop begins

        printf ("Enter start number: ");                 //prompt user to enter start number
        scanf ("%d", &start);                            //read start number from user
        printf ("Enter stop number: ");                  //prompt user to enter stop number
        scanf ("%d", &stop);                             //read stop number from user
        printf ("Start number is %d and stop number is %d\n", start, stop);              //display start and stop numbers      
        printf ("-------------------------\n", start, stop);                             //display separator line   

        if (start < stop) {                                                              //if start is less than stop, do the following 
            printf ("Sequence from start to stop: ");                                    //display message
            for (int i = start; i <= stop; i++){                                         //for loop to increase i by 1 from start to stop
                printf("%d ", i);}                                                       //display numbers from start to stop

            printf("\nThank you.");                                    //display thank you message
            break;                                                     //exit loop
        } 

        else if (start = stop) {                                                         //if start is equal to stop, do the following
            printf ("Your Start number is equal to Stop number, please try again!\n");    //display message
            continue;                                                                      //continue to next loop
        } 

        else {                                                                          //if start is greater than stop, do the following
            printf ("Your Start number is greater than Stop number, please try again!\n"); //display message
            continue;                                                                      //continue to next loop
        }                            
     
        return 0;                                                                            //indicate that program ended successfully
    }
}

//description: inline 8 we use while loop to create an infinite loop as lomg as the condition is true
//             inline 10-14 we tell user to input start and stop numbers and we read them 
//             inline 17-22 if start is less than stop we staer a for loop to print numbers from start to stop
//             inline 23 we break the loop because we have completed our task
//             inline 26-28 if start is equal to stop we display a message and we use continue to go back to the start of the loop
//             inline 31-33 if start is greater than stop we display a message and we use continue to go back to the start of the loop