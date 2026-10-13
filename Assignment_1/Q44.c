#include<stdio.h>
int main()
{
    int u;
    float a;
    printf("Enter your consumed units here : ");
    scanf("%d",&u);
    if(u>0 && u<=200)
    {
        a=u/2;
    }
    else if(u>=201 && u<=400)
    {
        a=100+(u-200)*0.65;
    }
    else if(u>=401 && u<=600)
    {
        a=230+(u-400)*0.8;
    }
    else
    {
        a=425+(u-600)*1.25;
    }
    printf("Hence you have to this much amount : %f",a);
}