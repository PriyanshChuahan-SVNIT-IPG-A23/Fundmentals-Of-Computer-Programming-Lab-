#include<stdio.h>
int main()
{
    char c;
    float a,b,t;
    printf("Give the operator symbol(+,-,*,/) whose operation is to be performed here : ");
    scanf("%c",&c);
    switch(c)
    {
        case '+' : 
        printf("Enter two numbers whose addition is to be done here : ");
        scanf("%f%f",&a,&b);
        t=a+b;
        printf("Your sum is %.2f.",t);
        break;

         case '-' : 
        printf("Enter two numbers whose subtraction is to be done respectively here : ");
        scanf("%f%f",&a,&b);
        t=a-b;
        printf("Your subtraction is %.2f.",t);
        break;

         case '*' : 
        printf("Enter two numbers whose multiplication is to be done here : ");
        scanf("%f%f",&a,&b);
        t=a*b;
        printf("Your multiplication is %.2f.",t);
        break;

         case '/' : 
        printf("Enter two numbers whose division is to be done respectively here : ");
        scanf("%f%f",&a,&b);
        t=a/b;
        printf("Your division is %.2f.",t);
        break;
        default : printf("-----ERROR-----Enter correct operator symbol!!!!-------");
    }
    
}