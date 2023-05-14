#include<stdio.h>
#include<ctype.h>
// by using function  ---strrev---
/*
int main()
{
    char a[100];
    int i=0,d,j;
    scanf("%s",a);
    printf("%s",strrev(a));
    return 0;
}
*/
// without using function
#include<string.h>
int main()
{
    char a[100],r[100];
    int b,j,e;
    scanf("%s",a);
    b = strlen(a);
    e = b-1;
    for(j=0;j<b;j++){
        r[j] = a[e];
        e--;
    }
    r[j] = '\0';
    printf("%s",r);
    return 0;
}
