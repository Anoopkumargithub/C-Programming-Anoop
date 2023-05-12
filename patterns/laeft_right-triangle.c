#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=n-1;j>=1;j--)
        printf(" ");
        for (j=1;j<=i;j++)
        printf("x");
        printf("\n");
    }
    return 0;
}
