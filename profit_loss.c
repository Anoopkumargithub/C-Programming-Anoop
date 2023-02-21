#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float c,s,a;
    scanf("%f",&c);
    scanf("%f",&s);
    
    if (c>s){
        printf("Loss\n");
        a = (((c-s)/c)*100);
    }else{
        printf("Profit\n");
        a = (((s-c)/c)*100);
    }
    
    printf("%.2f%%",a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
