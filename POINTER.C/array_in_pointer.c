#include<stdio.h>
int array(int,int*);
void main(){
    int n=10 ,sum = 0;
    int a[n],i;
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum = array(n,a);
    printf("%d",sum);
    }
    int array(int n,int p[]){
        int sum = 0,i;
        for (i=0;i<n;i++){
            sum+=p[i];
            return (sum);
        }
    }