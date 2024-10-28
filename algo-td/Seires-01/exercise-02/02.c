#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float x, a, b, c;
	float deltaa;
	printf("enter three nubers a, b and c:  \n");
	scanf("%f%f%f", &a, &b, &c);
	printf("the equation is: %.0fx^2 + %dx + %d\n", a, b, c);
	deltaa = (b * b) - (4 * a * c);
	if (deltaa > 0)
	{
		x = (-b + sqrt(deltaa)) / (2 * a);
		printf("we have x1 = %d\n", x);
		x = (-b - sqrt(deltaa)) / (2 * a);
		printf("and x2 = %d", x);
	}
	else if (deltaa == 0) {
		x = -b / (2 * a);
		printf("we have doubled solution x1  = %d", x);
	}
	else {
		printf("there is no solution to the equation");
	}
}
