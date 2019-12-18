#include <stdio.h>

/* this program will read a set of text lines and print the longest */

/*     if (the line is longer than the previous longest)
           save it
           save the length
   print longest line */

#define MAXLINE 1000 /* max inut line size */

int getline (char line[], int maxline);
coid copy(char to[], char from[]);

/* print longest input line */
/* One piece gets a new line, another tests it, another saves it, and the rest controls the process */

main(void)
{
    int len;			/* current line length */
    int max;			/* maxiumum length so far */
    char line[MAXLINE]; 	/* current input line */
    char longest[MAXLINE];	/* longest line saved here */

    max = 0;			/* set max value to 0*/
    while ((len = getline(line, MAXLINE)) > 0) /* while (there is another line as an option) */
        if (len > max) {        /* if (the line is longer than the previous longest) */
            max = len;
            copy(longest, line);/* save the length */
        }
    if (max > 0) 		/* there was a line */
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;

}
  
