#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[5];
    for(int b = 0;b < 5; b++){
        scanf("%d", &a[b]);
    }
    for(int i = 4; i >= 0; i--) {
        printf("--%d", a[i]);
    }
}
