#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, temp,arm=0;
    scanf("%d",&n);
    int b = log10(n)+1;
    printf("%d",b);
    for (int i=1;i<b+1;i++){
        temp = n%10;
        printf("temp %d\n",temp);
        arm = arm + (pow(temp,b));
        printf("arm %d\n", arm);
        n = n/10;
    }
    printf("%d",arm);
    return 0;
}