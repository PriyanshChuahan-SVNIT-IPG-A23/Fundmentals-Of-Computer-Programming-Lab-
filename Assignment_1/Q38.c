#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter required number of terms to be printed : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i*i);
    }
}