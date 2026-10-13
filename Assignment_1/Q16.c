#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers here : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d A is greatest.",a);
    }
    else if(b>a && b>c)
    {
        printf("%d B is greatest.",b);
    }
    else
    {
        printf("%d C is greatest.",c);
    }
}
