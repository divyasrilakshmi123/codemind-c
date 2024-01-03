#include<stdio.h>
int main()
{
    int a,i;
    float sum=0.00,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=1.0/i;
        sum=sum+b;
    }
    printf("%.2f",sum);
}