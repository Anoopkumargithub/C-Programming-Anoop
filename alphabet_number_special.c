# include <stdio.h>
#include <ctype.h>
int main()
{
    char a,b;
    scanf("%c",&a);
    b = tolower(a);
    // if else
    if ((b>=97) && (b<=122)){
        printf("Alphabet");
    }else if((b>=48) && (b<=57) ){
        printf("Number");
    }else{
        printf("Special Character");
    }
    return 0;
}
