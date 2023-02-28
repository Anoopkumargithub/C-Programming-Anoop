# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    // using if-else
    if (a>0){
        printf("+");
    }else if(a<0){
        printf("-");
    }else{
        printf("0");
    }
    // using ternary operator
    (a>0)?printf("+"):
    (a<0)?printf("-"):
    printf("0");
    // using switch 
    switch (a>0)
    {
    case 1:
        printf("+");
        break;
    case 0:{
        switch (a==0)
        {
        case 1:
            printf("0");
            break;
        case 0 :
            printf("-");
            break;
        }
    }
    }
    return 0;
}
