#include<stdio.h>
int main()
{
    int n,d,s=0,m=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        s+=d;
        m*=d;
        n=n/10;
    }
    if(s==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
    
}