//How much will I pay at hostel calculator
/* This program will read an integer (between 0 and 12) indicating the number of hours past noon of clients arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, and 5 dollars are added for every hour after noon. The total is capped at 53 dollars. */

//input: 7
//output: 45

#include <stdio.h>
int main (void){
    //set a variable for how many hours the user is late by
    int late;
    //prompt user to ask for how many hours they are late by
    printf("How many hours are you expecting to be late?: \n")
    scanf("%d", &late);
    //the total amount paid is a base of $10 plus 5 times the amount late
    int sum = (10+(5*late));
    //set a variable for sum of our money being greater than $53
    int totalExceed = sum > 53; 
    //since total is capped at $53
    //if sum is over 53 print "53"
    if(totalExceed) {
        printf("53");
    } else { // or else (if sum < 53) print our sum
        printf("%d", sum);
    }
    
    return 0;
}
