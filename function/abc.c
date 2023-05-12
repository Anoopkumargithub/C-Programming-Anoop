#include <stdio.h>
#include <math.h>

int prime(int);
int arms(int);
// void perfect(int);
void main()
{
    int a, c = 0;
    scanf("%d", &a);
    c = prime(a);
    if (c == 0)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d ia not a prime number", a);
    }
    arms(a);
    // perfect(a); 
}
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % 2 != 0)
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
int arms(int n)
{
    int k, b, i, m;
    int p = 0;
    m = n;
    k = log10(n) + 1;
    for (i = 0; i < k; i++)
    {
        b = n % 10;
        p += pow(b, k);
        n = (int)n / 10;
    }
    if (m == p)
    {
        printf("\n%d is an Armstrong number", n);
    }
    else
    {
        printf("\n%d is an not an Armstrong number", n);
    }
    return 0;
}