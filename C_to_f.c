#include<stdio.h>
int main(int argc, char const *argv[])
{
    //c to f
    // float c,f;
    // printf("temp. in degree C\n");
    // scanf("%f",&c);
    // f = (c*(9/5))+32;
    // printf("temp. in degree F%f\n",f);
    float f,c;
    printf("temp. in degree F\n");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("temp. in degree F%f\n",c);
    return 0;
}
