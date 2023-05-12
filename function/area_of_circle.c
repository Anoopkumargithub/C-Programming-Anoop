#include <stdio.h>
void sum(int r){
    int e;
    e = (3.14)*r*r;
    printf("%d",e);
}
int main(int argc, char const *argv[])
{
    int r;
    scanf("%d",&r);
    sum(r);
    return 0;
}
