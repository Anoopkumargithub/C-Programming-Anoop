#include <stdio.h>
int main(int argc, char const *argv[])
{
    int by,py,age;
    printf("Enter Birth Year\n");
    scanf("%d",&by);
    printf("Enter Present Year\n");
    scanf("%d",&py);
    age = py-by;
    printf("Age = %d",age);
    return 0;
}
