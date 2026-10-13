#include<stdio.h>
int main()
{
    int n,r,t,s=0;
    printf("Enter your number here : ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    n=t;
    printf("Hence revervse number of %d is %d .",n,s);
}