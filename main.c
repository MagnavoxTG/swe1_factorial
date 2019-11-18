//estimated time = 15min
//actual time = 17 min

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main() {
    int x = 0;
    char intreadout[255] = "";
    long long int number = 0, factorial_result = 1;

    while (x != 1) {
        // printf shows a message asking you to enter a positive number
        printf("\nPlease enter a positive NON-floating-point number which is smaller than 20(f.e. 5): ");
        //scanf writes the input into a string (char array)
        scanf("%s", intreadout);
        //gets(intreadout);
        // strspan checks how many of the specified character are inside the string and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // if they are the same then there are only allowed characters in the string
        if (strspn(intreadout, "0123456789") == strlen(intreadout)){
            number = (long long int)atoll(intreadout);
            if (number > 20) {
                printf("You entered a number that is too large!");
            } else {
                printf("The factorial of %lli!:\n", number);
                // factorial number is calculated by multiplying every number up to the given number
                // Bsp.: 5! = 1*2*3*4*5 = 120
                for (long long int y = 1; y <= number; y++) {
                    factorial_result = factorial_result * y;
                    // checks iff its the last number or not (for a cleaner output format)
                    if (y != number) {
                        printf("%lli * ",y);
                    } else {
                        printf("%lli = %lli",y, factorial_result);
                    }
                }
                // breaks while
                x = 1;
            }
        } else {
            printf("invalid input");
        }
    }
}