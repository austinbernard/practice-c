// Write a program that is longer than 80 characters

#include <stdio.h>
#define MAXLINE 1000    
#define LONGLINE 80     

int getline(char line[], int maxline);      /* read input line, return length of line, and as text up to MAXLINE set */

/* we want to print lines longer than LONGLINE */
int main (void){
    int len;            /* current line length */
    char line(MAXLINE)  /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s", line);             /* print input line if len is greater than 80 characters */
                                            /* else no action is taken */
    return 0;
}