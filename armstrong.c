#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d,e;
    scanf("%d",&a);
    b=a;
    int k = log10(b)+1;
    for (int i=1;i<=k;i++){
        d = b%10;
        printf("%d\n",d);
        e = pow(d,k);
        c = c+e;
        b = b/10;
}
    printf("%d",c);
    return 0;
}
// except 153