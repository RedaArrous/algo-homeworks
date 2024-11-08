#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, check = 1; // the check variable determines the end of lines we're printing in the terminal;
    printf("enter a number: ");
    scanf("%d", &x);
    int i = 1;
    if (i <= 0) {
        printf("invalid value enter a number greater than 0 to display the rows or colomns");
    }
    printf(".......... DISPLAY -A- ..........\n");
    do {
        printf("%d", i);
        // printing values from 1 to "check" then reset the value of i and repeat the same thing
        if(i == check) {
            printf("\n");
            check++;
            i = 1;
            continue; // using it to skip the i++ instruction, if we don't skip it all of the other lines will start with 2 ( i + 1 ) instead of 1
        }
        i++;
    }while(check <= x );
    check = 1; // reset to start the other display
    printf(".......... DISPLAY -B- ..........\n");
    do {
        // making i equals to check every time because we're making i = 0 at the end of every iteration
        i = check;
        if(i == check) {
            printf("\n");
            check++;
        }
        while(i != 0){
            printf("%d", i);
            i--;
        }
    }while(check <= x );

}
