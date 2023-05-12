// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=1,b=0,n,d;
//     scanf("%d",&n);
//     for (int i =0;i<=n;i++){
//         d = b + i;
//         b = a;
//         a = a+1;
//         printf("%d\t",d);
//     }
//     return 0;
// }
// Fibonacci Series using Recursion
#include <stdio.h>
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
    scanf("%d",&n);
	printf("%d", fib(n));
	getchar();
	return 0;
}
