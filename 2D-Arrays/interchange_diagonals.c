#include <stdio.h>
int main(int argc, char const *argv[])
{
        int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],d=0;
    //input matrix
    for (int i=0;i<n;i++){
    for (int j=0 ;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    }
    for (int i=0;i<n;i++){
    for (int j=0 ;j<n;j++){
        scanf("%d",&b[i][j]);
    }
    }
    //print matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0,j=0;i<n,j<n;i++,j++){
        for (int x=0,y=0;x<n,y<n;x++,y++){
            if (i==x || j==y){
                d = a[i][x];
                a[i][x] = b[j][y];
                b[j][y] = d;
            }
        }
    }
    //print matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
