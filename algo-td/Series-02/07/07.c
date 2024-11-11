#include <stdio.h>
#include <stdlib.h>
int main(){
    int player1, player2;
    printf("please enter a number between 0 and 100: ");
    scanf("%d", &player1);
    if (player1 < 0 || player1 > 100) {
        printf("invalid number, enter a number between 0 and 100 please.");
    }
    else {
        printf("\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n player 2's turn: \n");
        printf("guess the number: ");
        do{
         scanf("%d", &player2);
         if (player2 < 0 || player2 > 100) {
            printf("invalid number, choose another number between 0 and 100 please. \n: ");
         }
         else {
            if (player2 < player1) {
                printf("too small \n: ");
             }
             else if (player2 > player1){
                printf("too big \n: ");
             }
         }

        }while(player1 != player2);
        printf("correct, the number is: %d", player2);
    }

}
