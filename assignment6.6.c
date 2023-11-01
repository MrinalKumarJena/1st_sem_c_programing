//wap to check the given number is armstrong's number or not//
#include<stdio.h>
void main()
{
	int num,temp,rem,res=0;
	printf("enter a three digit number:\n");
	scanf("%d" ,&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		res+=rem*rem*rem;
		temp=temp/10;
	}
	if(res==num)
	{
		printf("%d is an armstrong number" ,num);
	}
	else
	{
		printf("%d is not an armstrongs number" ,num);
	}
}
