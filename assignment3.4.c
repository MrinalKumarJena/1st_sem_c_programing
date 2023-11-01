/*calculate displacement*/
#include<stdio.h>
#include<math.h>
void main()
{
	float u;
	float t;
	float a;
	float s;
	printf("enter the initial velocity\ntime\nacceleration");
	scanf("%f %f %f" ,&u ,&t ,&a);
	s=u*t+(1/2)*pow((a*t),2);
	printf("displacement is %f\n" ,s);
	return 0;
}


