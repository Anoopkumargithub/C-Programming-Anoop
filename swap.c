#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter a number\n");
    scanf("%d",&a);
    printf("enter a number\n");
    scanf("%d",&b);
    // c = a;
    // a = b;
    // b = c;
    // a = b+a;
    // b = a-b;
    // a = a-b;
    // a = a^b;
    // b = a^b;    
    // a = a^b;
    a = a*b;
    b = a/b;
    a = a/b;
    printf("number 1 is%d\n",a);
    printf("number 2 is%d\n",b);
    return 0;
}
