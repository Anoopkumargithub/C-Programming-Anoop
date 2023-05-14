#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b;
    int i=0,k=0;
    scanf("%s",a);
    scanf("%c",b);
    for(i;a[i];i++){
        if (a[i]==b){
            k=1;
        }
    }
    if(k==1){
        printf("%d",i);
    }
    return 0;
}
