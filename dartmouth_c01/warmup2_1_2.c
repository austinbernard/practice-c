// OR operator
#include <stdio.h>
int main(void) {
    int sunny = 1;
    int vacation = 1;
    int sunORVacation = sunny || vacation;
    // 1 || 1 : 1, 1 || 0 : 0, 0 || 1 : 0, 0 || 0 : 0
    // to go to else both variables must be 0 
    if (sunORVacation) {
        printf("Going well: it is sunny OR I am on vacation OR both!\n");
    } else {
        printf("Not going well: is it NEITHER sunner NOR am I on vacation!\n");
    }
    return 0;

}