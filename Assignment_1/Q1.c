#include <stdio.h>

void main(void)
{
float p,r,t,i;
printf("Enter your principle amount, rate of interest and time period in years here : ");
scanf("%f%f%f",&p,&r,&t);
i=(p*r*t)/100;
printf("Your simple interest as per calculated is %f.",i);
}