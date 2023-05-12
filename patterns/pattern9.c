#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for (int k=1;k<=(i-1);k++){
            if(k<=i)
            printf("*");
        }
        // for(int j=4;j>=i;j--){
        //     printf(" ");
        // }
        printf("\n");
    }
    return 0;
}
