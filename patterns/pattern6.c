#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=1;
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }

    return 0;
}
