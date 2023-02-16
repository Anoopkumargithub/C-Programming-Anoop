#include <stdio.h>


int main() {
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ((a>=b)&&(a>=c)&&(a>=d))?printf("%d",a):((b>=a)&&(b>=c)&&(b>=d))?printf("%d",b):((c>=a)&&(c>=b)&&(a>=d))?printf("%d",c):((d>=a)&&(d>=b)&&(d>=c))?printf("%d",d):
    printf("error");

    
    return 0;
}
