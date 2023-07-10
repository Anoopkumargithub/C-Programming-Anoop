#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, temp,sum=0;
    scanf("%d",&n);
    int b = log10(n)+1;
    for (int i=1;i<b+1;i++){
        temp = n%10;
        sum = sum + temp;        
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}
