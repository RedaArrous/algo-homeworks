#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int day;
    printf("please enter a number between 1 and 7: ");
    scanf("%d", &day);
    if (day <= 7 && day >= 1) {
        if (day == 1) {
            printf("sunday");
        }
        else if (day == 2) {
            printf("monday");
        }
        else if (day == 3) {
            printf("tuesday");
        }
        else if ( day == 4) {
            printf("wednesday");
        }
        else if (day == 5) {
            printf("thursday");
        }
        else if (day == 6) {
            printf("friday");
        }
        else {
            printf("saturday");
        }
    }
    else {
        printf("invalid value");
    }


}
