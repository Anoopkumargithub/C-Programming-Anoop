# include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2];
    int i,j,(*p)[2];
    p=a;
    for(i=0;i<2;i++)
    {
    for(j = 0;j<2;j++)
    scanf("%d",&a[i][j]);
    }
for (i=0;i<2;i++)
for

(j =0;j<2;j++)
printf("%d ",p[i][j]);        
    return 0;
}
