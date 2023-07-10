#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,b,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("Enter an element: ");
    scanf("%d",&b);
    for (int i=0;i<n;i++){
        if (a[i] == b){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
