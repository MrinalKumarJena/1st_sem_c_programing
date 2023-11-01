//wap to test whether a given number is prime or not//
#include<stdio.h>
void main()
{
	int num,i,prime=1;
	printf("enter a number :\n");
	scanf("%d" ,&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	if(prime)
	{
		printf("%d is a prime number \n" ,num);
	}
	else
	{
		printf("%d is not a prime number\n" ,num);
	}
}	


