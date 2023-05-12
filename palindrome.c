#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,b,c=0,d;
    scanf("%d",&a);
    b = a;
    int k =log10(b);
    for (int i=0;i<=k;i++){
        d = b%10;
        c = c*10+d;
        b = b/10;
    }
        printf("%d\n",c);
    if (a==c){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}
