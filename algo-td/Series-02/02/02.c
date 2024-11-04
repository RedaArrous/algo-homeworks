#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    for (int i = 1; i < 11; i++) {
        printf("%d * %d = %d\n", x, i, x * i);
    }

}

