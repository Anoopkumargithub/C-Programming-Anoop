#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d;
    scanf("%D",&a);
    b = a;
    int k = log10(b)+1;
    for (int i =0;i<=k;i++){
        d = b%10;
        c = c*10+d;
        b = b/10;
    }
    c = c/10;
    printf("%d",c);
    return 0;
}
