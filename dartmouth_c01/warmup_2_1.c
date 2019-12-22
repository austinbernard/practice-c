#include <stdio.h>
int main(void) {
    int sunny = 0;
    int vacation = 0;
    int sunAndVacation = sunny && vacation;
    // 1 && 1 : 1, 1 && 0 : 0, 0 && 1 : 0, 0 && 0 : 0
    if (sunAndVacation) {
        printf("Yeaaaa!!\n");
    } else {
        printf("Too bad!\n");
    }
    return 0;

}
