#include <stdio.h>

/* This program will count characters in input */
int main(void)
{
    double nc;			/* Double will cope with bigger numbers that carry a value of 32768 or greater */
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;			/* Body of for for loop is empty because the work will not exceed the test - there is nothing to compute */
    printf("%.0f\n", nc); 	/* Double precision floar */	
}
