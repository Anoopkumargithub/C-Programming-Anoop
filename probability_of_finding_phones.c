#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if (a<d && b<d && c<d){
        printf("0.333\n");
        printf("0.333\n");
        printf("0.333\n");
    }else if(a<d &&  b<d && c>=d){
        printf("0.500\n");
        printf("0.500\n");
        printf("0.000\n");
    }else if (b<d &&  c<d && a>=d){
        printf("0.000\n");
        printf("0.500\n");
        printf("0.500\n");
    }else if (c<d &&  a<d && b>=d){
        printf("0.500\n");
        printf("0.000\n");
        printf("0.500\n");
    }else if (a<=d && b>d && c>d){
        printf("1.000\n");
        printf("0.000\n");
        printf("0.000\n");
    }else if (b<=d && a>d && c>d){
        printf("0.000\n");
        printf("1.000\n");
        printf("0.000\n");
    }else if (c<=d && b>d && a>d){
        printf("0.000\n");
        printf("0.000\n");
        printf("1.000\n");
    }else{
        printf("0.000\n");
        printf("0.000\n");
        printf("0.000\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
