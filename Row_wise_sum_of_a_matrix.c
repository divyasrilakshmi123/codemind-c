#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sr;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sr=0;
        for(j=0;j<c;j++)
        {
            sr=sr+a[i][j];
        }
        printf("%d ",sr);
    }
}