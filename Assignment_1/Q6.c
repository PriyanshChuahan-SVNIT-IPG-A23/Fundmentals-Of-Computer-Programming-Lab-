#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of A and B respectively here : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, the value of A is %d and of B is %d.",a,b);
}