//Problem set 1.3_2
/*The population of a city has risen sharply over the past few years, thanks to a high birth rate. However, this poses a number of problems, including a housing shortage. The mayor has decided to deal with the problem and would like to estimate the future growth of the population, and he has called you in to help!

This program first reads an integer representing the current population of the city, and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). It will display the expected population of the city in a year as a whole number. By convention we will only consider "whole" people. Therefore; a population of 31.8 inhabitants will be considered as having 31 inhabitants. */

//input: 123, 7.0
//output: 131

#include <stdio.h>
int main() {
    // population and percentgrowth need to take in an int value
    int population, percentGrowth;
    // growth, coverting whole number to decimal, and expected population answer to take in double value
    double growth, conversion, expected;
    // convert my expected double into an int because population is a whole number
    int iExpected;
    
    //enter current population (whole number)
    scanf("%d\n", &population);
    //enter growth by percentage
    scanf("%lf\n", &growth);
    // convert growth into a fraction
    conversion = growth/100;
    // multiply population by the conversion growth
    percentGrowth = population * conversion;
    // add the percent growth to my current population to give me the expected population
    expected = population + percentGrowth;
    // expected population is currently is not in a whole number, convert expected to an integer 
    iExpected = (int) expected;
    // print the expected population as a whole number
    printf("%d", iExpected);
 
    return 0;
}
