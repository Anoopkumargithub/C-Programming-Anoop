# include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2],i,j,k=0,(*b)[4];
    for(i=0;i<2;i++)
    for(j = 0;j<2;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    *b[k++] = &a[i][j];

for (i=0;i<4;i++)
printf("%d ",(*b)[i]);        
    return 0;
}
