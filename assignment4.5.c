/*divisible by 11 and 13*/
#include<stdio.h>
void main()
{
	int a;
	printf("enter the number");
	scanf("%d" ,&a);
	if((a%11==0) && (a%13==0))
	{
		printf("the number is divisible by 11 and 13");
	}
	else if((a%11!=0) && (a%13!=0))
	{
		printf("the number is not divisible by 11 and 13");
	}
}
