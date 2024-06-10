#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d",&num);
    int last=num%10;
    int first=num/1000;
    int res=last+first;
    printf("%d",res);
    return 0;
}
