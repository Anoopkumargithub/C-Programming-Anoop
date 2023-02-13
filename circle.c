#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,d,c,ar;
    printf("Enter radius\n");
    scanf("%f",&a);
    d = 2*a;
    printf("Diameter is%.2f\n",d);
    c = 2*3.14*a;
    printf("Circumference is%.2f\n",c);
    ar = 3.14*a*a;
    printf("Area%.2f\n",ar);

    return 0;
}
