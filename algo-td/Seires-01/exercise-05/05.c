#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float avrg;
  printf("enter your BAC avreage: ");
  scanf("%f", &avrg);
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
}
