#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char s[100];
    scanf("%s",s);
    int i = 0;
    while(s[i]) {
      putchar (tolower(s[i]));
      i++;
    }
    return 0;
}

