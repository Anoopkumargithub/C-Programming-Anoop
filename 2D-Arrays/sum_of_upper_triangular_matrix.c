#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,k=0;
    printf("Enter no. of element\n");
    scanf("%d",&n);
    int a[n][n];
    printf("input element for 1st matrix\n");
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element %d %d\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("1st matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix are equal or not\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j<i){
                a[i][j]=0;
            }
            
        }
    }
    printf("Upper triangular matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("sum of element\n");
    for( int i=0;i<n;i++){
        for (int j=0;j<n;j++)
        k = k+a[i][j];
    }
    printf("%d",k);
    return 0;
}