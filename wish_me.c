#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int h,m;
    scanf("%d %d",&h,&m);
    if ((h>=4) && (h<=11 && m<=59)){
        printf("Good Morning");
    }else if ((h>=12) && (h<=15 && m<=59)){
        printf("Good Afternoon");
    }else if((h>=16) && (h<=20 && m<=59)){
        printf("Good Evening");
    }else {
        printf("Good Night");
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
