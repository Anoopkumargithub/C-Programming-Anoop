#include <stdio.h>
void area(int a,int b){
    printf("%d",a*b);
}
int main(int argc, char const *argv[])
{
    int a,b;
    scanf("%d %d",&a,&b);
    area(a,b);
    return 0;
}
