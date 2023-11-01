/*check if the number is positive or negative*/
#include<stdio.h>
void main()
{
	int a;
	printf("enter a number to be checked positive or negative");
	scanf("%d" ,&a);
	if((a!=0) && (a>0))
	{
		printf("is a positive number\n");
	}
	else(a<0);
	{
		printf("is a negative number\n");
	}
}



