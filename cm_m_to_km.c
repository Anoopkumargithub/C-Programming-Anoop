#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,m,k;
    printf("Enter a length in cm\n");
    scanf("%f",&c);
    printf("cm to m\n");
    m = c*0.01;
    printf("%.3f\n",m);
    printf("m to km\n");
    k = m*0.001;
    printf("%f",k);
    return 0;
}
