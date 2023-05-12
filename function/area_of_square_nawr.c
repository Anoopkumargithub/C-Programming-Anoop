#include<stdio.h>
int area(){
    int a;
    scanf("%d",&a);
    return (a*a);
}
int main(int argc, char const *argv[])
{
    printf("Enter length of square\n");
    int result = area();
    printf("%d",result);
    return 0;
}
