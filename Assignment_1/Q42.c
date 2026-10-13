#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,t,m,f=0;
    printf("enter your number here :");
    scanf("%d",&n);
    t=n;
    if(t==1 || t==0)
    {
        printf("%d is not a prine nor composite number.",n);
        exit(0);
    
    }
    else
    {
    for(i=2;i<n/2;i++)
    {
        m=t%i;
        if(m==0)
        {
            f=1;
            break;
        }
    }
    }
    if(f==1)
    {
        printf("%d is not a prime number, i.e., it a composite number.",n);
    }
    
    else
    {
        printf("%d is a prime number.",n);
    } 
}
