#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k1,k2;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d",&k1,&k2);
        for(int j=0;;j++){
            if ((k1+k2+j)/j==0){
                printf("%d",j);
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
