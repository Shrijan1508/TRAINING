#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float interest= (float) (a*b*c)/100;
    float amount= (float) interest+a;
    float discount = (float) interest*0.02;
    float final = (float) amount-discount;
    printf("%.2f\n",interest);
    printf("%.2f\n",amount);
    printf("%.2f\n",discount);
    printf("%.2f",final);
    return 0;
}
