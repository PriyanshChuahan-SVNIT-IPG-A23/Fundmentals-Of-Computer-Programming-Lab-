#include<stdio.h>
int main()
{
    char c,d,t,f;
    printf("Enter your desired character here : ");
    scanf("%c",&c);
    d=(c>='A' && c<='Z')?t:f;
    if(d==t)
    {
        printf("%c is Capital letter.",c);
    }
    else
    {
        printf("%c is not upper case letter.",c);
    }
}