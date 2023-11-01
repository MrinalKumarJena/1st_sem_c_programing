/*calculate simple intrest*/
#include<stdio.h>
int main()
{
	float p;
	float t;
	float r;
	float si;
	printf("enter the principal\ntime\nrate of intrest");
	scanf("%f %f %f" ,&r ,&p ,&t);
	si=p*t*r/100;
	printf("the simple intrest is %f\n" ,si);
	return 0;
}


