#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
// print by for loop
    // for (int i=0;i<n;i++){
    //     printf(" %d ",a[i]);
    // }
    // return 0;
// print by  while loop
int i=0; 
while(i<n){
    printf("%d ",a[i]);
    i++;
}
}