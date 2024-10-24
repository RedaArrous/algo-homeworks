#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	float x, y;
	printf("enter x and y: \n");
	scanf("%f %f", &x, &y);
	if (x - y > 0)
	{
		printf(" |x - y| is greater than 0 so\n |x - y| = (x - y) = %.1f", x - y);
	}
	else if (x - y < 0)
	{
		printf(" |x - y| is less than 0 so\n |x - y| = -(x - y) = %.1f", -x + y);
	}
	else {
		printf("|x - y| = 0");
	}
	return 0;
}
