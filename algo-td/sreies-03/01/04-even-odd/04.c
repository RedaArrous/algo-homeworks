#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10], odd, even = odd = 0;
    for(int i = 0; i < 10; i++){
        printf("enter the value: ");
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            even++;
        }else {
            odd++;
        }
    }
    printf("odd numbers: %d\neven numbers: %d", odd, even);
}
