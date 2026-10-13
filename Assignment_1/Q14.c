#include<stdio.h>
int main()
{
    char c;
    printf("Enter your character here : ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("Capital letter");
    }
    else if(c>='a' && c<='z')
    {
        printf("Small case letter");
    }
    else if(c>=0 && c<=9)
    {
        printf("Letter");
    }
    else
    {
        printf("Special character");
    }
}