#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    // using for loop
    for (int i=1;i<=10;++i){
        printf("%d * %d = %d\n",a,i,a*i);
    }
    //using while
    int i =1;
    while (i<=10){
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }
    // using do while
    do{
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }while(i<=10);
    return 0;
}