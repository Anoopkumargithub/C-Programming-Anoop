#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[2*n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
        for (int j=0;j<n;j++){
            c[j] = a[j];
        }for (int k = 0;k<n;k++){
            c[n+k] = b[k];
        }
    
    for(int i=0;i<2*n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
