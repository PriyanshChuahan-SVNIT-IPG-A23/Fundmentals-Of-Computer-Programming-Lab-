#include<stdio.h>
int main()
{
    int n,r,s=0,t;
    printf("Enter your number here : ");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        r=t%10;
        s=10*s+r;
        t=t/10;
    }
    if(s==n)
    {
        printf("%d is Palindrom.",n);
    }
    else
    {
        printf("%d is not a palindrom.",n);
    }
}