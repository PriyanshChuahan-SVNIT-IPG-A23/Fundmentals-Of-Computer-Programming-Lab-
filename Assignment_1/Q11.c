#include<stdio.h>
int main()
{
    int s,m,h;
    printf("Enter seconds here : ");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    printf("Time is %d hours and %d minutes.",h,m);
    
}