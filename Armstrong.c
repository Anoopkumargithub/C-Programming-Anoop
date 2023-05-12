#include <stdio.h>
# include <math.h>
int main() {
    int n, b, c, remainder, result = 0;
    scanf("%d", &n);
    b = n;
    int a  = log(n)+1;
    c = pow(remainder,a);
    while (b != 0) {
        remainder = b % 10;
       result += c;
       b /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}
