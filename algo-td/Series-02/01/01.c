#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n, fact;
    printf("enter a number please: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("invalid, enter a positive number");
    }
    else if(n == 1 || n == 0) {
        printf("1");
    }
    else {
        fact = n;
        do {
            fact *= (n - 1);
            n--;
        }while( n > 1);
        printf("%d",fact);
    }
}
