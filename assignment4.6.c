/*find whether the triangle is valid or not*/
#include<stdio.h>
void main()
{
        int a,b,c;
        printf("enter the values of the sides of a triangle");
	scanf("%d %d %d" ,&a ,&b ,&c);
	if((a+b>c) && (b+c>a) && (c+a>b))
	{
		printf("the triangle is valid");
	}
	else
	{
		printf("the triangle is invalid");
	}
}
