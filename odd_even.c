#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,i;
    scanf("%d",&a);
    printf("Even number\n");
    
        i = a;
        while (i<=100){
            if (i%2==0){
            printf("%d ",i);
        }
            i++;
    }
    printf("\n");
    printf("Odd number\n");
    
        i = a;
        while (i<=100){
            if (i%2!=0){
            printf("%d ",i);
        }
            i++;
    }
    return 0;
}
