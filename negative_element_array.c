#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[8]={1,2,3,4,-7,-9,-4,0},c=0;
    for (i=0;i<=7;i++){
        if (a[i] <0){
            printf("%d %d", i , a[i]);
            c = c+1;
            printf("\n");
        }
    }
    printf("Total negative element= %d",c);
    return 0;
}
