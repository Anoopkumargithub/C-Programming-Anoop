#include<stdio.h>
void prime (int a){
   int i, prime = 1;
   

   for(i = 2; i < a; i++) {
      if((a% i) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", a);
   else
      printf("%d is not a prime number.", a);
}
int main(int argc, char const *argv[])
{
    int a; scanf("%d",&a); prime(a);
    return 0;
}
