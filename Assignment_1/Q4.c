#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in fahrenheit here : ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("So temperature in centigrade is %.2f . ",c);
}