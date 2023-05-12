#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,c=0,d,e;
    scanf("%d",&a);
    // b=a;
    int k = log10(a)+1;
    for (int i=1;i<=k;i++){
        d = a%10;
        printf("%d\n",d);
        e = pow(d,k);
        c = c+e;
        a = a/10;
}
    printf("%d",c);
    return 0;
}
// // except 153
#include <stdio.h>
#include <math.h>
void main()
{
    int n,a,b,c=0,d;
    scanf ("%d",&n);
    int k=log10(n)+1;
    a=n;
    for (int i=1; i<=k ; i++)
    {
        b=n%10;
        d=pow(b,k);
        c=c+d;
        n=(int) n/10;
        
    }
    printf ("%d",c);
    if (a==c)
    {
        printf ("\nArmstrong number");
    }
    else{
        printf ("\nNot an armstrong nunber");
    }
}