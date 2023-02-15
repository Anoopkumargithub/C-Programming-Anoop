#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    // using ternary operator
    (a%2==0)? printf("Even"):
    printf("Odd");
    // using if else 
    if (a%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
