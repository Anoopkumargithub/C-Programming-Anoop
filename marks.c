# include <stdio.h>
# include <math.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,e,t;
    float avg,per;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    t = (a+b+c+d+e);
    avg = (t/5);
    per = (t/5);
    printf("Total%d\n",t);
    printf("Average%f\n",avg);
    printf("Percentage%f\n",per);
    return 0;
}
