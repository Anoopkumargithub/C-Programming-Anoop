#include <stdio.h>
#include <math.h>

void armstrong(int n)
{
    int a,b,d;
    for (int i = 0; i < n; i++)
    {
    int c=0;
    a=i;
    int k=log10(a)+1;
    for (int j=1; j<=k ; j++)
    {
        b=a%10;
        d=pow(b,k);
        c=c+d;
        a=(int) a/10;
        
    }
    // printf ("%d",c);
    if (a==c)
    {
        printf ("%d Armstrong number \t",i);
    }else{
        continue;
    }
    c=0;
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    armstrong(n);
    return 0;
}