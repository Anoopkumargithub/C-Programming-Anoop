#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , a = 0 , b = 1 , next = a+b , sum = 1;
    scanf("%d",&n);
    for (int i=3;i<=n;i++){
        sum = sum + next;
        a = b;
        b = next; 
        next  = a  + b;
    }
        printf("%d ",sum);
    return 0;
}
// 0 1 1 2 3 5 8 13 21  = 54