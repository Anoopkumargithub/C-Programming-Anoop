#include<stdio.h>
// finding length without using Function
/*
int main(int argc, char const *argv[])
{
    char a[100],c=0;
    scanf("%s",a);
    for(int i=0; a[i];i++){
        c = c+1;
    }
    printf("%d",c);
    return 0;
}
*/
// finding length by function ---strlen---
#include<string.h>
int main(int argc, char const *argv[])
{
    char a[100];
    scanf("%s",a);
    printf("%d",strlen(a));
    return 0;
}
