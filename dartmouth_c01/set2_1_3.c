/*You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.*/

/*This program will read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you will pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. The program will display the type of tax: "Special tax" or "Regular tax". Followed by the amount you have to pay on the next line.*/


#include <stdio.h>
int main(void){
    int diceOne, diceTwo, sum, sumGreater;
    printf("What numbers did you roll? (1-6) press enter after you enter the first number: \n")
    scanf("%d\n%d", &diceOne, &diceTwo);
    sum = diceOne + diceTwo;
    sumGreater = sum >= 10;
    if (sumGreater){
        printf("Special tax\n");
        printf("36");
    }else{
        printf("Regular tax \n");
        printf("%d", sum*2);
        
    }


    return 0;
}
