#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
    return 0;
}