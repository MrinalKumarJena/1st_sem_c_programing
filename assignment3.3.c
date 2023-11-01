/*calculate compound intrest*/
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,n,r,ci;
	printf("enter the principal\ntime\nrate of intrest\nnumber of times anually");
	scanf("%f %f %f %f" ,&r ,&p ,&t ,&n);
	ci=p*pow((1+r/n),n*t)-p;
	printf("the compound intrest is %f\n" ,ci);
	return 0;
}
