#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,k,n;
    scanf("%d",&c);
    scanf("%d",&k);
    scanf("%d",&n);
    long int a;
    a = (pow(k,n))*c;
    printf("%ld",a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
