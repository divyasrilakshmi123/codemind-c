#include<stdio.h>
int main()
{
    int n,ld=0;
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        if(d>ld)
        {
            ld=d;
        }
        n/=10;
    }
    printf("%d",ld);
}