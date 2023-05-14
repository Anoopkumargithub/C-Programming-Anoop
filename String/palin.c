#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
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
    if (a==r){
        printf("Palindrome\n");
    }else{
        printf("Not a Palindrome\n");
    }
    return 0;
}
