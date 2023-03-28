#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=1;
    scanf("%d",&a);
    b = a;
    for (int i=a;i>=1;i--){
        c = c*i;
    }
    printf("%d",c);
    return 0;
}
