// Carpooling App Calculator
/* Prompt: If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip. If you have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost ($1 fee + gas) among the passengers and you. You want to write a program that calculates the cost you have to pay. */

/* The program will read the number of passengers and the cost of gas for the trip. The program will then print the cost that you have to pay for the trip. */

//input: 0 23.9
//output: 23.90

//input: 2 45.5
//output: 15.50


#include <stdio.h>
int main(void){
    int passenger;
    double gas;
    //prompt for number of passengers and gas needed
    printf("How many passengers? And how much gas will it cost? when inputting only separate with a space - no dollar sign needed.");
    scanf("%d %lf", &passenger, &gas);
    // create a static condition if (passenger =! 0) add $1.00 gas fee and divide that by the number of passengers plus the driver
    // expected error: if driver is not included the cost will be only split among passengers and the prompt asks for how much will the driver pay.
    if (passenger) {
        printf("%.2lf", (gas + 1.00)/(passenger+1));
    } else {
        printf("%.2lf", gas);
    }
    return 0;
}
