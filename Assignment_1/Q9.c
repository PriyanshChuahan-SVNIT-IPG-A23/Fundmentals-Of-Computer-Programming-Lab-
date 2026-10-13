#include<stdio.h>
int main()
{
    int t,h,m,s;
    printf("Enter time in following format (Hours:Minutes:Seconds) here : ");
    scanf("%d%d%d",&h,&m,&s);
    s=s+(h*3600)+(m*60);
    printf("Hence provided time in total seconds is %d .",s);
}