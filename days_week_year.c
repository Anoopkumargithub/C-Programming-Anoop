#include<stdio.h>
int main(int argc, char const *argv[])
{
    int d,w,y;
    printf("enter days\n");
    scanf("%d",&d);
    w = d/7;
    y = d/365;
    printf("week%d\n",w);
    printf("year%d\n",y);
    return 0;
}
