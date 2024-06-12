#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,n2,a[20],b[20],count=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    if(n1!=n2)
    {
        printf("Incompatible");
        return 0;
    }
    else
    {
        for(int i=0;i<n1;i++)
        {
            if(a[i]>=b[i])
            {
                count++;
            }
        }
        if(count==n1)
        {
            printf("Compatible");
        }
        else
        {
            printf("Incompatible");
        }
    }
    return 0;
}
