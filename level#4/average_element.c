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
        if (a[i] % 2 == 0){
            sum = sum + a[i];
            }
    }
    printf("Avg- %d",sum/n);
    return 0;
}
