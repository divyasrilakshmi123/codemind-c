#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int last_digit=a[10];
    for(i=1;i<n;i++)
    {
        if(a[i]%2==1)
        {
            last_digit=i;
        }
    }
    printf("%d",last_digit);
}