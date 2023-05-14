#include<stdio.h>
// copying string 1 to another string by using function ---strcpy---
/*
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100],b[100];
    scanf("%s",a);
    strcpy(b,a);
    printf("%s",b);
    return 0;
}
*/
// copying string 1 to another string without using function
int main(int argc, char const *argv[])
{
    char a[100],b[100];
    int i=0,j=0;
    scanf("%s",a);
    for(i,j;a[i];i++,j++){
        b[j] = a[i];
    }
    b[i]=0;
    printf("%s",b);
    return 0;
}
