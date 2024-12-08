#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[]= {7, 8, 9, 10, 11};
    int c[n + m];
    for(int i = 0; i < m + n; i++){
        if(i < n ) c[i] = a[i];
        else c[i] = b[i - n];
        printf("%d, ", c[i]);
    }
}
