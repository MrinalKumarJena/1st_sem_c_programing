//program to calculate gross salary  of an employee by giving basic salary using user defined function
#include<stdio.h>
float DA (float x)
{
	float y;
	y=(60*x)/100;
	return y;
}
float HRA (float x)
{
	float y;
	y=(15*x)/100;
	return y;
}
void main()
{
	float bs, da, hra;
	printf("Enter basic salary\n");
	scanf("%f", &bs);
	da=DA(bs);
	hra=HRA(bs);
	printf("DA:%f \n", da);
	printf("HRA:%f \n", hra);
	printf("GROSS SALARY:%f \n", bs+da+hra);
}
