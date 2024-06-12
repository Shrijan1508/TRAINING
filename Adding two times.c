#include <stdio.h>int h=h1
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int h1,h2,m1,m2,s1,s2,h,m,s;
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    h=h1+h2;
    m=m1+m2;
    s=s1+s2;
    if(m>60)
    {
        h=h+1;
    }
    if(s>60)
    {
        m=m+1;
    }
    printf("%d:%d:%d",h,m,s);
    return 0;
}