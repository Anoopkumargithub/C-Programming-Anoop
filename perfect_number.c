#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    long a;
   scanf("%d",&n);
    for(long i=0;i<n;i++){
        scanf("%ld",&a);
        if (a == (i*i)){
            printf("Perfect Square\n");
            break;
        }else if (a<i){
            printf("Not a Perfect Square\n");
            break;
        }else{
            continue;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}