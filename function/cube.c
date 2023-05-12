#include <stdio.h>
#include<math.h>
void cube(int a){
    int e;
    e = pow(a,3);
    printf("%d",e);
}
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d ",&a);
    cube(a);
    return 0;
}
