#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the required number of terms to be printed here : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d/%d!\t+\t",i,i);
    }

    }
    
