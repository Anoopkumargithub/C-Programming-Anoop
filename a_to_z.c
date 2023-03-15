#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    scanf("%c",&a);
    int b=("%d",a);
    int i=b;
    if (b>=65 && b<=90){
        while (i<=90)
    {
        printf("%c ",i);
        i++;
    }
    }
    if (b>=97 && b<=122){
        while (i<=122)
    {
        printf("%c ",i);
        i++;
    }
    }
    
    
    return 0;
}
