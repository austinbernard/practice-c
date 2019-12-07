#include <stdio.h>

int main()
{
    int fahr, celsius;		/* variable must be declared before use */
    int lower, upper, step;	/* variable must be declared before use */
    
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper lmit */
    step = 20;      /* step size */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

