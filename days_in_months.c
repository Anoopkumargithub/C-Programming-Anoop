#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    switch (a){
            case 1:
                printf("31");
                break;
            case 2:
                printf("28");
                break;
            case 3:
                printf("31");
                break;
            case 4:
                printf("30");
                break;
            case 5:
                printf("31");
                break;
            case 6:
                printf("30");
                break;
            case 7:
                printf("31");
                break;
            case 8:
                printf("31");
                break;
            case 9:
                printf("30");
                break;
            case 10:
                printf("31");
                break;
            case 11:
                printf("30");
                break;
            case 12:
                printf("31");
                break;
            default :
                printf("Wrong month value.");
                break;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
//using if else
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a ;
    scanf("%d",&a);
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("%d",31);
    }else if (a==2){
        printf("%d",28);
    }else if (a==2||a==4||a==6||a==9||a==11) {
        printf("%d",30);
    }else{
        printf("Wrong month value.");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
