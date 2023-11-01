/*the sum and average of two numbers*/
#include<stdio.h>
void main()
{
	int a;
	int b;
	int sum,avg;
	printf("enter two numbers a and b :");
	scanf("%d %d",&a ,&b);
	sum=a+b;
	avg=(a+b)/2;
	printf("sum and avg of two numbers are %d %d\n" ,sum,avg);
}
