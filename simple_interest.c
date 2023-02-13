#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int p,r,t;
    float si;
    scanf("%d%d%d",&p,&r,&t);
    si = ((p*r*t)/100);
    printf("Simple Interest%.2f\n",si);
    return 0;
}
