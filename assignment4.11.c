//find the leap year
#include<stdio.h>
void main()
{
	int a;
	printf("enter the year");
	scanf("%d" ,&a);
	if(a%400==0)
	{
		printf("leap year");
	}
	else if(a%100==0)
	{
		printf("leap year");
	}
	else if(a%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
