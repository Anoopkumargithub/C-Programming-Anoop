#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d,e=1;
    scanf("%d",&a);
    b = a;
    int k = log10(b)+1;
    for (int i=1;i<=k;i++){
        d = b%10;
        for (int j=d;j>=1;j--){
            e = e*j;
        }
            c = c + e;
            b = b/10;
            e = 1;
    }
        printf("%d",c);
    return 0;
}
