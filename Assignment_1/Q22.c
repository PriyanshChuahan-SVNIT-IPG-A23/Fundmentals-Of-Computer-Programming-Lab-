#include<stdio.h>
int main()
{
    long int i=1,j,n;
    printf("Enter your desired number here : ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        i=i*j;
    }
    printf("Hence, %d! = %d",n,i);
}