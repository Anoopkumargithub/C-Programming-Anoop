#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d=0;
    scanf("%d",&a);
    b = a;
    for (int i=1;i<b;i++){
        if (b%i==0){
            c = i;
        d = d+c; 
        }
    }
    printf("%d",d);
    return 0;
}
