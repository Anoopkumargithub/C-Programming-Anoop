#include <stdio.h>
void prime(int a)
{
    int i, prime = 1;
    for (i = 2; i < a; i++)
    {
        if ((a % i) == 0)
        {
            prime = 0;
        }
        if (prime == 1)
            printf("%d\n", a);
    }
}
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    prime(a);
    return 0;
}
