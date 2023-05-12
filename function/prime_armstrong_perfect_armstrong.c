#include<stdio.h>
#include<math.h>
void armstrong (int n)
{
    int b,d,c=0,e; 
    b = n;
    int k = log10(b)+1;
    for (int i =1;i<=k;i++){
        d = b%10;
        e = pow(d,k);
        b  = b/10;
        c = c+ e;
    }
    printf("Armstrong no.  %d \n",c);
}

void prime(int n)
{
    int  i, flag = 0;
    for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is not a prime number.\n");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }
}

void perfect(int n) {
   int  num,sum = 0;
   num = n;   
   for(int i = 1; i <= num/2; i++) {
      if(num % i == 0) {
         sum += i;
      }
   }
   
   if(sum == num) {
      printf("%d is a perfect number.\n", num);
   }
   else {
      printf("%d is not a perfect number.\n", num);
   }
   
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    armstrong(n);
    prime(n);
    perfect(n);
    return 0;
}
