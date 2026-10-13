#include<stdio.h>
int main()
{
    int cm,m,p,c,e;
    printf("Enter your marks of english,maths,physics and enetrance examination respectively here : ");
    scanf("%d%d%d%d",&m,&p,&c,&e);
    cm=((m+p+c)/2)+e;
    printf("Cutoff marks as calculated are %d .",cm);
}