#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    printf("Enter length\n");
    scanf("%f",&a);
    printf("Enter breadth\n");
    scanf("%f",&b);
    float c;
    c = (a*b);
    printf("%.2f",c);
    return 0;
}
