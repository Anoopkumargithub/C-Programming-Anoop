#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter a year\n");
    scanf("%d",&a);

    ((a%4==0) || (a%400==0))? printf("Leap Year"):
    printf("Ordinary Year");
    return 0;
}
