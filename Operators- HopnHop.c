#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,dist;
    scanf("%d%d",&x,&y);
    dist=sqrt((x-3)*(x-3)+(y-4)*(y-4));
    printf("%d",dist);
        
    return 0;
}
