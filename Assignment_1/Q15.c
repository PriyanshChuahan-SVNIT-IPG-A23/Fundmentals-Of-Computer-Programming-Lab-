#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,t;
    printf("Enter marks of your subjects here : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    t=(m1+m2+m3+m4+m5)/5;
    if(t<=100 && t>=80)
    {
        printf("First class");
    }
    else if(t<=79 && t>=60)
    {
        printf("Second class");
    }
    else if(t<=59 && t>=40)
    {
        printf("Third class");
    }
    else
    {
        printf("--Fail--");
    }


}