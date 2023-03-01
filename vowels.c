#include<stdio.h>
#include <ctype.h>
int main()
{
    char a,b;
    scanf("%c",&b);
    a = tolower(b);
    // if else
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    // ternary operator
    (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')?printf("Vowel"):printf("Consonant");
    // switch 
    switch (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
    case 1:
        printf("Vowels");
        break;
    case 0:
        printf("consonant");
        break;
    }
}
