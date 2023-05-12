///to read and print maximum and minimum elements in array
#include <stdio.h>

void main()
{
    int n;
    printf("enter the no of elements in an array: ");
    scanf("%d",&n);
    int a[n],i,max,min;
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("\nThe maximum in array is: %d\nThe minimum in the array is: %d",max,min);
}