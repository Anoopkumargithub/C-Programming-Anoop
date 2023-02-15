#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 number\n");
    scanf("%d%d",&a,&b);
    printf("Maximun no. is ");
    // using if else
    if (a>=b){
        printf("%d\n",a);
    }else{
        printf("%d\n",b);
    }
    // using ?
    (a>=b)? printf("%d is greater than %d",a,b):
    printf("%d is greater than %d",b,a);
    return 0;
}
