#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    ((a+b)==(c))?printf("+"):((a-b)==c)?printf("-"):((a*b)==c)?printf("*"):printf("/");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
