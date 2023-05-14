#include<stdio.h>
#include<String.h>
int main(int argc, char const *argv[])
{
    char a[100];
    int b[26] = {26},i;
    scanf("%s",a);
    for(i= 0; a[i];i++){
        b[a[i]-97]++;
    }
    b[0]++;
    printf("%s",b);

    return 0;
}
