#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n] ,temp ;
    for (int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ;i<n;i++){
        for (int j =0;j<n;j++){
            if (a[j]>a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\n%d",a[n-1]);
    return 0;
}
