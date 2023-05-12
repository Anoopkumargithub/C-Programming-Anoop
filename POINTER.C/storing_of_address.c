#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=5 ,*p,k;
    p = &a;
    k = p;
    printf("%d\n",k);
    k = *p;
    printf("%d\n",k);
    k = *(++p);
    printf("%d\n",k);
    k = ++(*p);
    printf("%d\n",k);
    return 0;
}
