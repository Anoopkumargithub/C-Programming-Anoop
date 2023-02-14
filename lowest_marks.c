#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter no. of marks Obtained in each subject\n");
    scanf("%f %f %f",&a,&b,&c);
    if ((a<=b) && (a<=c)){
        printf("%f",a);
    } else if((b<=a) && (b<=c)){
        printf("%f",b);
    }else{
        printf("%f",c);
    }
    return 0;
}
