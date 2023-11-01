//wap a program to find the sum of the digits of a given number//
#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter the number :\n");
	scanf("%d" ,&num);
	while(num!=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("sum of digits :%d\n" ,sum);
}
