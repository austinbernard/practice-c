//Problem set 1.3
//Program must first read an integer indicating the number of grades to be averaged. Next, it will read the grades one by one, all of which are integers as well. Finally, it will calculate and print the average of the grades to two decimal places.

#include <stdio.h>
int main(void) {
    int num, grade, i;
    int sumGrade = 0;
    double doubSumGrade;
//request user input for number of grades to be inputted   
    scanf("%d", &num);
//create a series of prompts that asks user to enter grade(s) for each number of grade(s) selected
    for(i=0 ; i < num ; i++){
        scanf("%d", &grade);
//update my sum each time by adding the grade to the previous grade(s)
        sumGrade = sumGrade + grade;
    }
//convert my sum to float so we can divide properly    
    doubSumGrade = (double) sumGrade;
//print average to 2 decimal place holders 
    printf("%.2lf", doubSumGrade/num);

    return 0;
}
