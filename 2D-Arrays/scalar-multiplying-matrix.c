#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter no. of element\n");
    scanf("%d\n",&n);
    printf("Enter scaler no.\n");
    scanf("%d",&m);
    int a[n][n];
    printf("input element for 1st matrix\n");
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element %d %d\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Scalar Multiplication of matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",m*a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
