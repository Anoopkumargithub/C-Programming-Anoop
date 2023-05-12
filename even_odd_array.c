#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ,a[8]={1,2,3,4,5,6,7,8},c = 0,d = 0;
    for (i=0;i<=7;i++){
        if (a[i]%2==0){
            c = c+1;
        }else{
            d = d+1;
        }
    }
    printf("Total Even Element = %d\n ",c);
    printf("Total Odd Element = %d ",d);
    return 0;
}
