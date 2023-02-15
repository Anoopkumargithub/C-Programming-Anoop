#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>=b) && (b>=c)){
        printf("%d", a);
    }else if((b>=a) && (b>=c)){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
    return 0;
}
