#include <stdio.h>
#include <stdlib.h>
int main () {
    int val1, val2, choice;
    printf("enter the first value then the second: \n");
    scanf("%d%d",&val1,&val2);
    printf("choose an operation from the list below:\n1: --> Somme\n2: --> Product\n3: --> Average\n4: --> Minimum\n5: --> Maximum\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("the sum is: ", val2 + val1) ;
        break;
    case 2:
        printf("the product is: ", val2 + val1) ;
        break;
    case 3:
        printf("the avreage is: ", (val2 + val1) / 2);
        break;
    case 4:
    if (val1 <= val2)
        {
            printf("the minimum is: %d", val1) ;
        }else {
            printf("the minimum is: %d", val2) ;
        }
        break;
    case 5:
        if (val1 >= val2)
        {
            printf("the maximum is: %d", val1) ;
        }else {
            printf("the maximum is: %d", val2) ;
        }
        break;

    default:
    printf("Invalid choice. Please select a value from the list above.");
        break;
    }
    return 0;
}
