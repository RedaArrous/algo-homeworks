#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, b = 0;
    printf("enter the number of integers you want: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values you want", n);
    for(int i = 0; i < n; i++){
        printf("\n---: ");
        scanf("%d",&a[i]);
        b += a[i];
    }
    printf("the sum is: %d\n", b);
}
