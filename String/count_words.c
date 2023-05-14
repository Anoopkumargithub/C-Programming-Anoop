#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[100];
    int c = 0;
    scanf("%s",a);
    for (int i=0;a[i];i++){
        c = c+1;
    }
    printf("%d",c);
    return 0;
}
