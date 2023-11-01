/*find whether the triangle is valid or not*/
#include<stdio.h>
void main()
{
        int a,b,c;
        printf("enter the values of the sides of a triangle");
        scanf("%d %d %d" ,&a ,&b ,&c);
	int sq1=a*a;
	int sq2=b*b;
	int sq3=c*c;
        if((a+b>c) && (b+c>a) && (c+a>b))
        {
                printf("the triangle is valid");
	if(a==b && b==c)
	{
		printf("it is an equilateral triangle");
	}
	else if(a==b||b==c||c==a)
	{
		printf("it is an isoscale triangle");
	}
	else if(sq1+sq2==sq3||sq2+sq3==sq1||sq3+sq1==sq2)
	{
		printf("it is a right angled triangle");
	}
	else
	{
		printf("it is a scalar triangle");
	}
}
        else
        {
                printf("the triangle is invalid");
        }
}                                                        
