#include<stdio.h>
int main()
{
    int x;
    float y,n;
    printf("Enter value of n and x respectively here : ");
    scanf("%f%d",&n,&x);
    if(n==1)
    {
        y=1+x;
    }
    else if(n==2)
    {
        y=1+(x/2);
    }
    else if(n==3)
    {
        y=1+x*x*x;
    }
    else if(n>3 || n<1)
    {
        y=1+n*x;
    }
    printf("According to your input Y(x,n) = Y(%d,%.3f) = %.3f",x,n,y);
}