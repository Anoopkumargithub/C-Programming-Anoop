#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n][n],c=0;
    //input matrix
    for (int i=0;i<n;i++){
    for (int j=0 ;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    }
    //print matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    // sum of row
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c = c + a[i][j];
        }
       printf("Sum of element of row %d is %d \n",i,c);
       c = 0; 
    }
    // sum of column
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c = c + a[j][i];
        }
       printf("Sum of element of column %d is %d \n",i,c);
       c = 0; 
    }
    return 0;
}
