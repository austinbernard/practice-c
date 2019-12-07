#include <stdio.h>

int main()
{
    float fahr, celsius;	/* variable must be declared before use */
    int lower, upper, step;	/* variable must be declared before use */
    
    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper lmit */
    step = 20;      /* step size */
    
    fahr = lower;
    printf("Fahrenheit-Celsius Conversion Table\n\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);	/* floating point number (fahr) is to be printed at least three characters wide, with no decimal point */
        fahr = fahr + step;
    }
    return 0;
}
