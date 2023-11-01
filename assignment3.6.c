/*find the value of t*/
#include<stdio.h>
int main()
{
	float t,a=2,b=3,c=4,d=4,x;
	printf("enter x\n");
	scanf("%f" ,&x);
	t=(a*x*x*x)+(b*x*x)+(c*x)+d;
	printf("the value of t is %f\n" ,t);
		return 0;
}

