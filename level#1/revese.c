#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, temp,rev=0;
    scanf("%d",&n);
    int b = log10(n)+1;
    for (int i=1;i<b+1;i++){
        temp = n%10;
        rev = rev + temp*(pow(10,b-i));
        n = n/10;
    }
    printf("%d",rev);
    return 0;
}
