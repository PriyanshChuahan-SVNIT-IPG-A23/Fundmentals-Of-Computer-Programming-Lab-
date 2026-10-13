#include<stdio.h>
int main()
{
 int s1,s2,s3,s4,s5;
 float p;
 printf("Enter your marks subjectwise here : ");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 p=(s1+s2+s3+s4+s5)/5;
 printf("You achieved %f percentage.",p);
}