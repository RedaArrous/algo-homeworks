#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[5], i = 0, largest;
    printf("enter integers: \n");
    scanf("%d", &a[i]);
    do{
        scanf("%d", &a[i + 1]);
        if (a[i] > a[i+ 1])
        {
            largest = a[i];
        }
        else if (a[i] <= a[i + 1])
        {
            largest = a[i + 1];
        }
        i ++;
    } while (i < 4);
    printf("it's: %d", largest);
}
