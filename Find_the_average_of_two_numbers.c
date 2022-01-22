#include<stdio.h>
int main()
{
    int a,b;
    float average;
    scanf("%d%d",&a,&b);
    average=((float)a+b)/2;
    printf("%.4f",average);
    return 0;
}