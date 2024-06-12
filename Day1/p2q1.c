//Operators - Splitting into the teams

//During the weekend, Ross Geller has decided to conduct some team games. He wants to split his friends into equal-sized teams. In some cases, some friends may be left out of the teams, and he wanted to use the left-out friends to assist him in conducting the team games. For instance, if there are 50 friends and they have to be divided into 7 equal-sized teams, then there will be 7 in each team and 1 friend will be left out. Ross asks for your help to automate this team-splitting task. Can you please help him out?

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int friends, teams;

    scanf("%d", &friends);
    scanf("%d", &teams);

    int friends_per_team = friends / teams;

    int left_out = friends % teams;

    printf("The number of friends in each team is %d and left out is %d\n", friends_per_team, left_out);
    
    return 0;
}


}
