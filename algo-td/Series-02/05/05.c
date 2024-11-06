#include <stdio.h>
#include <stdlib.h>
int main(){
    int posi, three;
    do {
        printf("enter a positive number: ");
        scanf("%d", &posi);
    }while(posi < 0);
    do {
        printf("enter number multiple of 3: ");
        scanf("%d", &three);
    }while(three % 3 != 0);
}
