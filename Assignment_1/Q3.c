#include<stdio.h>
void main()
{
    float gross,hra,da,ta,basic;
    printf("Enter your basic salary, house rent allowance, dearness allowance and travel allowance here : ");
    scanf("%f%f%f%f",&basic,&hra,&da,&ta);
    gross=hra+da+ta+basic;
    printf("Your gross salary is %f.",gross);
}