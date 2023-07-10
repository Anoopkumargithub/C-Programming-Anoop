#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ;i<n;i++){
        if ((a[i] % 3 == 0) || (a[i] % 5 == 0)){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
