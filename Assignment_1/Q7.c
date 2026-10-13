#include<stdio.h>
int main()
{
    float a,b,h;
    printf("Enter the value of base of triangle and height of triangle here : ");
    scanf("%f%f",&b,&h);
    a=(b*h)/2;
    printf("Area of triangle is %.3f .",a);
}