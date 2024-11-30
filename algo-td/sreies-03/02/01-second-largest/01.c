#include <stdio.h>
#include <stdlib.h>
int main(){
    int sl, l;
    int a[5] = {1, 1, 1, 0, 1};
    for(int i = 0; i < 5; i++){
        if(i == 0){ // this condition is for initializing sl and l
            if(a[i] > a[i + 1]){
                l = a[i];
                sl = a[i + 1];
            }else if(a[i] < a[i + 1]) {
                l = a[i + 1];
                sl = a[i];
            }else {
                l = sl = a[i];
            }
            i++;
            continue;
        }
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



