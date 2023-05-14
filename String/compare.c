#include<stdio.h>
#include<string.h>
// without using function 

int main(int argc, char const *argv[])
{
    char a[100],b[100];
    int len_a,len_b,i,j,f = 0;
    scanf("%s\n",a);
    scanf("%s",b);
    len_a = strlen(a);
    len_b = strlen(b);
    if (len_a!=len_b){
        printf("Both string are different\n");
    }else{
        for (i,j; a[i];i++,j++){
            if (a[i]!=b[j]){   
                f = 1;
                break;        
            }else{
                printf("Both string are same\n");
            }
        }
        if (f==1){
            printf("Both string are different\n");    
        }
    }
    printf("%d\n%d",len_a,len_b);
    return 0;
}

// by using function ---strcmp---
// int main(int argc, char const *argv[])
// {
//     char a[100],b[100];
//     int len_a,len_b,i,j;
//     scanf("%s\n",a);
//     scanf("%s\n",b);
//     len_a = strlen(a);
//     len_b = strlen(b);
//     if (len_a!=len_b){
//         printf("Both string are different\n");
//     }else{
//         i = strcmp(a,b);
//             if (i!=0){
//                 printf("Both string are different\n");                
//             }else{
//                 printf("Both string are same\n");
//             }
//     }
//     return 0;
// }
