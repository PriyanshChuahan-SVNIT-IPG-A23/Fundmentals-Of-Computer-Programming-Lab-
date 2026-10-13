#include<stdio.h>
int main()
{
    int a[50],n,i,j,k,m1,m2;
    printf("Enter number of terms you want to enter, here : ");
    scanf("%d",&n);
    printf("Enter your numbers here : ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    m1=a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]>a[0])
        {
            m1=a[j];
        }
    }    

     m2=a[0];
    for(k=n;k>=0;k--)
    {
        if(a[k]<a[0])
        {
            m1=a[k];
        }
        
    }    
    printf("Max=%d and min=%d",m1,m2);


}
