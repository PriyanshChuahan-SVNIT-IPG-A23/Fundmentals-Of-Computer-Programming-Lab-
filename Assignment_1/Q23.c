#include<stdio.h>
int main()
{
    int b,p,i=1,j=0;
    printf("Enter base and power to be raised here respectively : ");
    scanf("%d%d",&b,&p);
    do
    {
        i=i*b;
        j++;

    } 
    while(j<p);
    printf("So %d^%d = %d .",b,p,i);
    
}