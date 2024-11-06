#include <stdio.h>
#include <stdlib.h>
/* We are here subtracting multiples of 10 from the number given by the user.
   Based on the result of the subtraction, we determine the number of digits in this number using the variable i,
   which is defined by the number of times we perform the subtraction */
int main(){
    int num, test, check = 10, i = 1;
    printf("enter an integer: ");
    scanf("%d", &num);
    test = num;
    if (num == 0) {
        printf("the number of digits is: 1");
    }
    else if (num < 0) { // i think i don't need a whole algorithm to deal with negative numbers, "if it's negative just make it positive" :)
        num *= -1;
    }
    while( num > 0){
        num = test;
        if(num - check < 0) {
            printf("the number of digits is: %d", i);
            num -= check;
        } else if( num - check == 0) {
            printf("the number of digits is: %d", i + 1);
            num -= check;
        } else {
            check *= 10;
            i++;
        }
    }
}
