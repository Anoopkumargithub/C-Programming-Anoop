#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a,s,b,c=0,d,e;
    scanf("%d",&a);
    s=a;
    b = pow(s,2);
    int k = log10(b)+1;
    for (int i=1;i<=k;i++){

        d = b%10;
        c = c+d;
        b = b/10;
}
if (a==c){
    printf("Neon");
}else {
    printf("not a neon number");
}
    return 0;
}
// except 153