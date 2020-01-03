#include <stdio.h>
int main(void){
    int array[3];
    int readValue = 0;
    int arrayIndex;
    int i = 0;
    for(i = 0 ; i < 3; i++){
        printf("Enter a value: ");
        scanf("%d", &readValue);
        array[arrayIndex] = readValue;
        printf("Array Index %d contains %d\n", arrayIndex, array[arrayIndex]);
        arrayIndex = arrayIndex + 1;
    }
    return 0;
}

