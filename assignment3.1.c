/*volume of a sphere*/
#include<stdio.h>
void main()
{
	float r;
	float volume;
	printf("enter the radius of the circle :");
	scanf("%f" ,&r);
	volume=(4/3)*22/7*r*r*r;
	printf("the volume of the sphere is %f\n" ,volume);
	return 0;
}

