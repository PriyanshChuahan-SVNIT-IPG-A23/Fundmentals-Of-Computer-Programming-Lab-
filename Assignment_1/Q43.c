#include<stdio.h>
int main()
{
    float s,c;
    printf("Enter your sales here : ");
    scanf("%f",&s);
    if(s<=500)
    {
        printf("\nCommission is 5 percentage");
        c=0.05*s;

    }
    else if(s>500 && s<=2000)
    {
        printf("\nCommission is Rupees 35 plus 10 percentage.");
        c=35+(0.1*s);

    }
    else if(s>2000 && s<=5000)
    {
        printf("\nCommission is Rupees 185 plus 12 percentage.");
        c=185+(0.12*s);

    }
    else 
    {
        printf("\nCommission is 12.5 percentage");
        c=0.125*s;

    }
    printf("\nHence our commission is %f",c);
}

