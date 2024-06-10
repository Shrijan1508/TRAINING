#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float x=(float)(x1+x2)/2;
    float y=(float)(y1+y2)/2;
    printf("Arun's house is located at(%.1f,%.1f)",x,y);
    return 0;
}
