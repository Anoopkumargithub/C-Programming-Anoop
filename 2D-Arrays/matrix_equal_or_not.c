#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,c=0;
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

    printf("input element for 2nd matrix\n");
    int b[n][n],i,j;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element %d %d\t",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("1st matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix are equal or not\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i][j]==b[i][j]){
                c = c+1;
            }
            else{
                printf("Not equal");
                break;
            }
        }
    }
    if(c==4){
        printf("Equal");
    }
    
    return 0;
}
