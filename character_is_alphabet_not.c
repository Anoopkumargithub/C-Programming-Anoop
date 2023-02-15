#include <stdio.h>
int main(int argc, char const *argv[])
{
    int b;
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    b = ("%d",a);
    (((b>=65) && (b<=90)) || ((b>=97) && (b<=122)))? printf("%c is character", a):
    printf("%c is not a character",a);
    
    return 0;
}
