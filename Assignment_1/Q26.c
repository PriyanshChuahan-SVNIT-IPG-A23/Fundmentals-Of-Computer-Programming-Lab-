#include<stdio.h>
int main()
{
    int i,j,n,se=0,so=0;
    printf("Enter your number here : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            se=se+i;
        }
        else
        {
            so=so+i;
        }
    }
    printf("Sum of all even numbers in 1 to %d is '%d' and similarly sum of odd numbers is '%d' .",n,se,so);
}