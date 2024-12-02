#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int a[6] = {1, 2, 3, 4, 5, 6};
    a[0] = a[5];
    for(int i = 5; i > 0 ; i--){
        a[i] = a[i - 1];
    }
    for(int i = 0; i < 6 ; i++){
        printf("%d", a[i]);
    }

}
