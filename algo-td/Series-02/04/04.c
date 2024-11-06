#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, n, x2;
    printf("please enter x then n :\n");
    scanf("%d%d", &x, &n);
    x2 = x;
    if(n < 0) {
        printf("invalid value of n");
    } else if(n == 0) {
        printf("1");
    } else {
        for( ; n != 1; n--) {
            x *= x2;
        }
        printf(" x ^ n = %d", x);
    }

}
