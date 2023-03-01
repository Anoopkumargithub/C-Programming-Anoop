#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if ((i%400==0) || (i%4==0 && i%100!=0)){
            printf("%d ",i);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
