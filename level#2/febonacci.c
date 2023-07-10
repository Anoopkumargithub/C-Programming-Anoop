#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , a = 0 , b = 1 , next = a+b;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i=3;i<=n;i++){
        printf(" %d ",next);
        a = b;
        b = next; 
        next  = a  + b;
    }
    return 0;
}
// 0 1 1 2 3 5 8 13 21 