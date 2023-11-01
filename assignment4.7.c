#include<stdio.h>
int main()
{
	int a,b,c,d;
	float x;
	printf("enter value of a,b,c,d : ");
	scanf("%d %d %d %d" ,&a ,&b ,&c ,&d);
	x=(a-b)/(c-d);
	if(c!=d)
	{
		printf("the value of x as per the equetion is %f" ,x);
	}
	else
	{
		printf("value of c and d cannot be equal,retry");
	}
	return 0;
}
