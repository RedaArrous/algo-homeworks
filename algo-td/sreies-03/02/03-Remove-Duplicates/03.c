#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int a[7] = {4, 4, 4, 4 , 4, 4, 4}, j ;
    bool check ;
    for(int i = 0; i < 7; i++){
        check = true;
        for(int j = 0 ; j < 7; j++){
            if(a[j] == a[i] && j != i){
                check = false;
            }
        }
        if(check == true) {
            printf("%d ", a[i]);
        }
    }

}
