#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int friends,teams;
    scanf("%d%d",&friends,&teams);
    int in_team=friends/teams;
    int left= friends%teams;
    printf("The number of friends in each team is %d and left out is %d",in_team,left);
    return 0;
}
