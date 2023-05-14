#include<stdio.h>
#include<string.h>
// concatenate string by using function ---strcat---
/*
int main(int argc, char const *argv[])
{
    char a[100],b[100];
    printf("Enter string-1\n");
    scanf("%s\n",a);
    printf("Enter string-2\n");
    scanf("%s\n",b);
    printf("%s",strcat(a,b));
    return 0;
}
*/
// without using Function
int main(int argc, char const *argv[])
{
    char a[100],b[100];
    int i,j,d;
    printf("Enter string-1\n");
    scanf("%s\n",a);
    printf("Enter string-2\n");
    scanf("%s\n",b);
    d = strlen(a);
    for (i=d,j=0;b[j];i++,j++){
        a[i] = b[j];
    }
    a[i]=0;
    printf("%s",a);
    return 0;
}
