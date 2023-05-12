#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter no. element = ");
    scanf("%d",&n);
    int a[n],pos,flag=0,i;
    for (i=0;i<n;i++){
        printf("Enter element = ");
        scanf("%d\n",&a[i]);
        printf("Enter position = ");
        scanf("%d\n",&pos);
    }
    for(i =0;i<n;i++){
        if (pos == a[i]){
            flag++;
            break;
        }
        if (flag){
        printf("Search successfull");
    }else{
        printf("Element not found");
    }
    }
    return 0;
}
