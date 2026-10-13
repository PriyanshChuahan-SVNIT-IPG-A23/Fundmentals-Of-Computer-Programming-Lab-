#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two values corresponding to A and B here : ");
    scanf("%d%d",&a,&b);
    t=b;
    b=a;
    a=t;
    printf("After swapping, value of A is %d and value of B is %d. ",a,b);
    
}