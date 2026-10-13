#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number whose table is to be printed , here : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dX%d=%d\n",n,i,n*i);
    }
}