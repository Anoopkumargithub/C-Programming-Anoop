#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[10] = {3,4,5,6,7,8,9,0,1,2},c = 0;
    for (i=0;i<=9;i++){
        c = c + a[i];
    }
    printf("%d",c);
    return 0;
}
