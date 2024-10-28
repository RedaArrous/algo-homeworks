#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float avrg;
    short redo = 0; // using short because it takes less space in the memory
    printf("enter your BAC avreage: ");
  do { // added a value verification feature, so when the value is not logical like "bac = 25" the program will repeat itself and ask for a valid one
    scanf("%f", &avrg);
    redo = 0;
    if (avrg >= 0 && avrg <= 20) {
        if(avrg >= 16){
            printf("very good.");
          }
          else if(avrg >= 14 && avrg < 16){
                printf("good.");
          }
          else if(avrg >= 12 && avrg < 14){
                printf("fairly good.");
          }
          else {
                printf("not admitted.");
            }
     }else {
        printf("enter a valid value please: ");
        redo = 1;
     }
  } while (redo = 1);

}
