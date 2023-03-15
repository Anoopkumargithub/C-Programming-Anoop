#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b = log10(a);
    c = pow(10,b);
    d = a/c;
    e = a%10;
    printf("sum = %d\n",d+e);
    printf("Product = %d",d*e);
    return 0;
}
