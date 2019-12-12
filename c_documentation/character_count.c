#include <stdio.h>

/* This program will count characters in input */
int main(void)
{
    long nc;			/* accumulate count in long variable - atleast 32 bits */
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc); 	/* %ld will tell printf	that the corresponding argument in a long integer */
}
