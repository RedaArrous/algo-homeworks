#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double x, a, b, c;
	double deltaa;
	// using the double type for more accurate results because we're dealing with square roots and they can have really large fractions.
	printf("enter three numbers a, b and c: \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("the equation is: %lfx^2 + %lfx + %lf\n", a, b, c);
	if (a == 0 && b ==0 && c == 0) {
        printf("this is not an equation 0 = 0");
    }
    else if ( a == 0 ){
        printf("a first degree equation x = %lf002" , -c / b);
    } 
    else {
        deltaa = (b * b) - (4 * a * c);
        if (deltaa > 0)
        {
            x = (-b + sqrt(deltaa)) / (2 * a);
            printf("we have x1 = %lf\n", x);
            x = (-b - sqrt(deltaa)) / (2 * a);
            printf("and x2 = %lf", x);
        }
        else if (deltaa == 0) {
            x = -b / (2 * a);
            printf("we have double roote x1  = %lf", x);
        }
        else {
            printf("there is no solution for the equation");
        }
    }
}

/* you can try this:
a = 1, b = 0, c = -4;
a = 1, b = 5, c = 6;
a = 5, b = -2, c = -3;
*/

