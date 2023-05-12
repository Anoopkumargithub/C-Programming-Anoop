#include<stdio.h>
void dia(int a){
    printf("%d",(2*a));
}
void cir(int a){
    printf("%d",(2*3.14*a));
}
void area(int a){
    printf("%d",(a*a));
}
int main(int argc, char const *argv[])
{
    int a,r,result;
    printf("Enter the value of radius\n");
    scanf("%d",&r);
    printf("Enter 1 for cal. dia\nEnter 2 for cal. cir.\nEnter 3 for cal. area\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        dia(r);
        break;
    case 2:
        cir(r);
        break;
    case 3:
        area(r);
        break;
    default:
        break;
    }
    return 0;
}
