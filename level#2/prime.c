#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if (n%i==0){
            sum = sum + 1;
        }
    }
    if (sum == 1){
        printf("prime Number");
    }else{
        printf("Not a prime number");
    }
    return 0;
}
