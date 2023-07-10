#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,sum = 0, temp;
    scanf("%d",&n);
    temp = n;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum = sum + i;
        }
    }
    if (sum ==  n){
        printf("Perfect number");
    }else{
        printf("Not a perfect number");
    }
    return 0;
}

