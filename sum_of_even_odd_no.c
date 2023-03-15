#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j,e=0,o=0;
    scanf("%d",&a);
    printf("Even number\n");
    
        i = a;
        while (i<=100){
            if (i%2==0){
            printf("%d ",i);
        }
        e = e+i;
        i++;
    }
    printf("\nSum of even number %d\n",e);
    printf("\n");
    printf("Odd number\n");
    
        j = a;
        while (j<=100){
            if (j%2!=0){
            printf("%d ",j);
        }
        o = o+j;
            j++;
    }
    printf("\nSum of odd number%d\n",o);
    return 0;
}
