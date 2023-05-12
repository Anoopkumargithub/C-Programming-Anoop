#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d,k;
    for (int i=1;i<=5;i++){
        d = 5-1;
        k = i;
        for (int j=1;j<=i;j++){
            printf("%d",k);
            k +=d;
            d--;
        }
        printf("\n");
    }
    return 0;
}
