#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s,p,r,t,total;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    s = p*r*t*0.01;
    total = s+p;
    printf("%d",total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
