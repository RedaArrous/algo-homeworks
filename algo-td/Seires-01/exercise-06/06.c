#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int d, m, y;
    printf("please enter a day, month and a year: \n");
    scanf("%d %d %d", &d, &m, &y);
    //checking the year and months and for the days it's enough to check if they're positive because we'll check them again later in the program
    if (y >= 0 && y <= 2024 && m >= 1 && m <= 12 && d >= 1) {
        // condition for february in leap year, if it's feruary and the year is either divisible by 4 and not by 100 or divisible by 400
        if (m == 2 && ( (y % 4) == 0 && (y % 100) != 0 || (y % 400) == 0) && d <= 29) {
            printf("%d/%d/%d\nthe date is validdd",d, m, y);
            }
        // for february in a normal year
        else if ( m == 2 && d <= 28) {
            printf("%d/%d/%d\nthe date is valid",d, m, y);
        }
        // 30 days month ;
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30){
            printf("%d/%d/%d\nthe date is valid",d, m, y);
        }
        //31 days moth
        else if ((m == 1 || m == 3  || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31){
            printf("%d/%d/%d\nthe date is valid",d, m, y);
        }
        else {
            printf("the date is not valid");
            }
    }
    else{
        printf("the date is not valid");
    }

}
