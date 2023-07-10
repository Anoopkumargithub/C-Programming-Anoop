#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,s;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i <n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter an elemnt to search: ");
    scanf ("%d",&s);
    for (int i=0;i<n;i++){
        if (a[i] == s){
            printf("pos- %d\nelement- %d",i,a[i]);
        }
    }
    return 0;
}
