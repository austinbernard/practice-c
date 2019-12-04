//DO NOT RUN THIS CODE | DO NOT RUN THIS CODE | DO NOT RUN THIS CODE
/*Tug of War National Championship. 

Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each time to inform your bet. You write a C program to assist with this.*/

/*Created a program that differed from solution. I used a series of identifiers to define my player weight. In comparison to course solution that used a for loop with a nested conditional based upon the number of members selected*/

/* input:

#include <stdio.h>
int main(void){
    /* how many members per team? */
    int numMem = 0;
    scanf("%d", &numMem);
    /* read 8 players weights */
    int p1, p2, p3, p4, p5, p6, p7, p8;
    scanf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d", &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
    /* calculate the total weight for each team */
    int team1 = p1+p3+p5+p7;
    int team2 = p2+p4+p6+p8;
    /* see if sum of team1 is greater than sum of team2 */
    int teamGreater = team1 > team2;
    if(teamGreater){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 had an advantage\n");
    }
    printf("Total weight for team 1: %d\n", team1);
    printf("Total weight for team 2: %d\n", team2);

    return 0;
}

/* Utilizing a for loop calculating the total team weight and updating the value each time to a variable is a solution to my identifier approach. This perhaps may have been a more efficient solution based on lines of code and computing power. It definitely would have */

#include <stdio.h>
int main() {
    int i;
    int numbMembers = 0;
    int totalWeightTeam1 = 0;
    int totalWeightTeam2 = 0;
    int weightRead = 0;
    scanf("%d", &numbMembers);
    for(i=0; i<numbMembers; i++){
        scanf("%d", &weightRead);
        totalWeightTeam1 = totalWeightTeam1 + weightRead;
        scanf("%d", &weightRead);
        totalWeightTeam2 = totalWeightTeam2 + weightRead;
    }
    int advantageTeam1 = totalWeightTeam1 > totalWeightTeam2;
    if(advantageTeam1){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalWeightTeam1);
    printf("Total weight for team 2: %d\n", totalWeightTeam2);
    return 0;
}



