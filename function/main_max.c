#include <stdio.h>
void max(int a, int b)
{
    (a>=b)? printf("%d is greater than %d",a,b):
    printf("%d is greater than %d",b,a);
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter 2 number\n");
    scanf("%d%d",&a,&b);
    max(a,b);
    return 0;
}
