#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,n,d,t;
    scanf("%d",&c);
    scanf("%d",&n);
    scanf("%d",&d);
    t = d*n+c;
    printf("%d",t-n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
