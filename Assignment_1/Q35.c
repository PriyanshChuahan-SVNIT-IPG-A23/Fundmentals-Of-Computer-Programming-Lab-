#include<stdio.h>
int main()
{
    int n,r,t,d,s=0;
    printf("Enter your number here : ");
    scanf("%d",&n);
    t=n;
    do
    {
    do 
    {
        r=t%10;
        s+=r;
        t=t/10;
    }
    while(t!=0);
    t=s;
    s=0;
    }
    while(t>9);
    
    printf("Hence the single digit sum of %d is %d",n,t);
    
}