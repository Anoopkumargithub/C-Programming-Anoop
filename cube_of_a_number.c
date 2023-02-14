#include <stdio.h>
#include <math.h>
int main()
{
  int a,cube;
  printf("Enter a number\n");
  scanf("%d",&a);
  cube = pow(a,3);
  printf("Cube of %d is %d",a, cube);
}
