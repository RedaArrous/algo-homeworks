#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int v1 , v2 ,i = 0;
printf("please enter a number: ");
scanf("%d", &v1);
printf("please enter a number: ");
scanf("%d", &v2);

while (i <= 2) {
	if (v1 <= v2)
	{
		printf("please enter a number: ");
		scanf("%d", &v2);
		i++;
	}
	else
	{
		printf("please enter a number: ");
		scanf("%d", &v1);
		i++;
	}
}
if (v1 <= v2)
{
	printf("the smallest number is: %d", v1);

}
else {
	printf("the smallest number is: %d", v2);
}
}
