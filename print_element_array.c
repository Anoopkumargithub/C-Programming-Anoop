#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,marks[10] = {3,4,5,6,7,8,9,0,1,2};
    for (i=0;i<=9;i++){
        printf("%d  %d",i , marks[i]);
        printf("\n");
    }
    return 0;
}
