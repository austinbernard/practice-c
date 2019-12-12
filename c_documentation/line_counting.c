#include <stdio.h>
int main(void)
{
    int c, nl;
    
    nl = 0;
    while ((c=getchar()) != EOF)
        if (c == '\n') 		/* body of while consistsof an if, which controls our increment of nl */
            ++nl;      		/* increase the count of nl by 1 */
    printf("%d\n", nl); 	/* when loop is done print out our total number of newlines present */

}
