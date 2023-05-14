#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char s[100];
    int i,a = 0,sp=0,n=0 ;
    scanf("%s",s);
    for (i=0;s[i];i++){
        int b = s[i];
        if ((b>=65 || b<91) || (b>=97 || b<123)){
            a = a+1;
        }
        else if ((b>=48 || b<57)){
            n = n+1;
        }
        else{
            sp = sp+1;
        }
        //else{
        //     sp = sp+1;
        // }
    }
    printf("No. of alphabetic characters %d\n",a);
    printf("No. of Special Characters %d\n",sp);
    printf("No. Of Numerical characters %d",n);
    return 0;
}

