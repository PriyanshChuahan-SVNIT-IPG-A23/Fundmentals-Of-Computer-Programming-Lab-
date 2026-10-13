#include<stdio.h>
int main()
{
    int t=0,n,i;
    printf("Enter number to be checked here : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
        
    }
    if(t==1)
    {
        printf("%d is not a Prime a number.",n);
    }
    else
    {
        printf("%d is a Prime number",n);
    }
}