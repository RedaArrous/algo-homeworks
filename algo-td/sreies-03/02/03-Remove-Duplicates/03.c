#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int arrsize;
    // to fill the array
    printf("enter the size of the array: \n");
    scanf("%d", &arrsize);
    int a[arrsize];
    printf("fill the array with %d values: \n", arrsize);
    for(int i = 0; i < arrsize; i++) scanf("%d", &a[i]);
    // the real work
    for(int i = 0; i < arrsize; i++){
        for(int j = i + 1 ; j < arrsize; j++){
            if(a[j] == a[i]){
                for(int k = j; k < arrsize - 1; k++){
                    a[k] = a[k + 1];
                }
                arrsize--;
                j--;
            }
        }
            printf("%d ", a[i]);
    }

}
