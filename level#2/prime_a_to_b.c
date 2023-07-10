#include <stdio.h>

int main()
{
    int b,c,i, a = 1, count;
    scanf("%d",&b);
    scanf("%d",&c);
    while (a <= b && a>=c)
    {
        count = 0;
        i = 2;
        while (i <= a / 2)
        {
            if (a % i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        if (count == 0 && a != 1)
        {
            printf(" %d ", a);
        }
        a++;
    }
    return 0;
}