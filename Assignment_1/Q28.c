#include<stdio.h>
int main()
{
    int n,i=0,d,r,j,s=0,p=1,t1,t2;
    printf("Enter number to be checked here : ");
    scanf("%d",&n);
    t1=n;
    t2=n;
    while(t1>0)
    {
        t1%10;
        i++;
        t1=t1/10;
    }
    
    while(t2>0)
    {
        r=t2%10;
        for(j=1;j<=i;j++)
        {
            p=p*r;
        }
        s=s+p;
        t2=t2/10;
        p=1;
    

    }
    if(s==n)
    {
        printf("%d is an Armstrong number.",n);
    }
    else
    {
        printf("%d is not an Armstrong number.",n);
    }

}