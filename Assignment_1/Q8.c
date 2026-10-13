#include<stdio.h>
int main()
{
    int s=31558150,m,h,d;
    d=s/(60*60*24);
    h=(s%(3600*24))/(60*60);
    m=((s%(3600*24))%(3600))/60;
    printf("Hence it takes %d days, %d hours and %d minutes for Earth to complete one revolution around the sun.",d,h,m);
    

}