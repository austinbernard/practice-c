/* This program starts by reading the amount of money you have, then reads the price per book. The program will then display the largest number of books that you can purchase with the given amount of money. */

//input: 48.0 , 3.50
//output: 13

#include <stdio.h>
int main(void){
    //values need to be set for our user to be able to enter dollar amount with chance-cents as an option
    double money, priceBook, numBook;
    //whole books needed, value needed for whole number of books to convert at the end
    int iNumBook;
    //prompt user for amount of money
    printf("How much money do you have? no dollar sign needed: \n");
    scanf("%lf", &money);
    //prompt user for price per book
    printf("What is the price per book? no dollar sign needed: \n");
    scanf("%lf", &priceBook);
    //divide the amount of money user has by the price per book (give a decimal)
    numBook = money/priceBook;
    //convert the total number of books into a whole number 
    iNumBook = (int) numBook;
    //let the user know how many books they can buy
    printf("You can puchase about %d books.", iNumBook);
    
    return 0;
}
