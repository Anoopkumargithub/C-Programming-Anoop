#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n], sum = 0;
    for (int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ;i<n;i++){
        sum = sum + a[i];
    }
    printf("%d",sum);
    return 0;
}
