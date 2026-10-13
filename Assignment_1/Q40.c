#include<stdio.h>
int main()
{
    int s=0,i;
    do 
    {
        printf("Enter your number here : ");
        scanf("%d",&i);
        s+=i;
    }
    while(i>=0);
    printf("Hence the sum of all numbers entered upward is : %d (without including negative number) and %d (including negative number) .",s-i,s);
}