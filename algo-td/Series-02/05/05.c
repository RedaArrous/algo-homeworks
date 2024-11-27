#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do {
        printf("enter a positive multiple of 3 number: ");
        scanf("%d", &n);
    }while( n < 0 || n % 3 != 0);
    printf("correct");
}

