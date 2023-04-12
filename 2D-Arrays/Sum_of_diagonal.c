#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n][n],c=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
           if (i==j){
            c = c + a[i][j];
           }
        }
    }
    printf("%d",c );
    
    return 0;
}
