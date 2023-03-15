#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d,e;
    scanf("%d",&a);
    b = log10(a)+1;
    for (int i=0;i<=b;i++){
        b = a%10;
        c= (c*10)+b;
        a = (int)a/10;
    }
    printf("%d\n",c);
    return 0;
}
