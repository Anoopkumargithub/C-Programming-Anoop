# include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    // if else
    if ((a%5==0) && (a%11==0) ){
        printf("divisible");
    }else{
        printf("not");
    }
    // ternary operator
    ((a%5==0) && (a%11==0))?printf("Divisible"):
    printf("not");
    // switch
    switch ((a%5==0) && (a%11==0))
    {
    case 1:
        printf("Divisible");
        break;
    case 0:
        printf("not");
    }
    return 0;
}
