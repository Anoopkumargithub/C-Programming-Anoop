// prime no.
#include <stdio.h>
int main(int argc, char const *argv[])
{
//1 to n
    int a;
    scanf("%d",&a);
    int i=2;
    while (i<=a)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
// n to 1
    int j=a;
    while (j>1)
    {
        printf("%d ",j);
        j--;
    }
    
    return 0;
}
