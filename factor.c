#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c=1;
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        if (a%i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}
