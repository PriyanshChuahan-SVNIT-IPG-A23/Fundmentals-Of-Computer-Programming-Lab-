#include<stdio.h>
int main()
{
    int n,t,r,s=0;
    printf("Enter your number here : ");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    printf("Sum of digits of %d is %d.",n,s);
}