/*Temperature conversion celsius to fahrenheit*/
#include<stdio.h>
int main()
{
	float c;
	float fh;
	printf("enter the temperature in celsius\n");
	scanf("%f",&c);
	fh=(c*9/5)+32;
	printf("temperature in fahrenheit is %f\n" ,fh);
	return 0;
}


