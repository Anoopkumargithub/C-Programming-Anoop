#include <stdio.h>
# include<math.h>

int main(int argc, char const *argv[])
{
    int n,temp, sum =0,x;
    scanf("%d",&n);
    x = n;
    int b= log10(n)+1;
    for (int i=0;i<b;i++){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    printf("Harshad Number is : %d",x/sum);
    return 0;
}
