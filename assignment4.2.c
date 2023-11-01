/*Odd or even*/
#include<stdio.h>
void main()
{
	int a;
	printf("enter a number to be checked odd or even");
	scanf("%d" ,&a);
	if(a%2==0)
	{
		printf("even number\n");
	}
	else if(a%2!=0)
	{
		printf("odd number\n");
	}
}

