#include <stdio.h>
#include <stdlib.h>
int main(){
    int sl, l;
    int a[5] = {1, 1, 1, 1, 1};
    if(a[0] > a[1]){
                l = a[0];
                sl = a[1];
            }else if(a[0] < a[1]) {
                l = a[1];
                sl = a[0];
            }else {
                l = sl = a[0];
            }
    for(int i = 2; i < 5; i++){
        if(a[i] > l){
            sl = l;
            l = a[i];
        }
        else if((a[i] >= sl || l == sl) && a[i] != l){
            sl = a[i];
        }
    }
    if(l == sl) {
        printf("there is no second largest");
    }else
    printf("the second largest is: %d\n", sl);
}



