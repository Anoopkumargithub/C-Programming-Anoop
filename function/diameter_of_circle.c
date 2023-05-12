#include <stdio.h>
void sum(int r){
    printf("%d",2*r);
}
int main(int argc, char const *argv[])
{
    int r;
    scanf("%d",&r);
    sum(r);
    return 0;
}
