/*calculate displacement part 2*/
#include<stdio.h>
#include<math.h>
void main()
{
	float a;
	float v;
	float u;
	float s;
	printf("enter the initial velocity\nfinal velocity\nacceleration");
	scanf("%f %f %f" ,&u ,&v ,&a);
	s=(pow(v,2)-pow(u,2))/2*a;
	printf("displacement is %f\n" ,s);
	return 0;
}

