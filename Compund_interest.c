#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int p,n,c;
    float r,t,a,b,ci;
    scanf("%d%d%d%d",&p,&r,&n,&t);
    a = (1+(r/n));
    c = (n*t);
    b = pow(a,c);
    ci = p*b;
    printf("compund Interest%f\n",ci);
    return 0;
}
