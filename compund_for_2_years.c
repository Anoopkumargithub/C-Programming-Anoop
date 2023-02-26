#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p,r,t,c;
    scanf("%f",&p);
    scanf("%f",&r);
    c = p*pow(1+r*0.01,2) ;
    t = c-p;
    printf("%.2f",t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

