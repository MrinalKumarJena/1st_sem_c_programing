/*to test divisibility by 7*/
#include<stdio.h>
void main()
{
	int i;
	printf("enter a number to be checked");
	scanf("%d" ,&i);
	if(i%7==0)
	{
		printf("the number is divisible by 7");
	}
	else if(i%7!=0)
	{
		printf("the number is not divisible by 7");
	}
}
