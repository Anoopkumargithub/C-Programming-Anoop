#include<stdio.h>
void even_odd(int a){
    if (a%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    even_odd(a);
    return 0;
}
