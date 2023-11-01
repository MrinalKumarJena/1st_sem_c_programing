//find the odd no.,even no.,positive no.,negative no. present in an array//
#include<stdio.h>
int main()
{
	int n,i,a[10],odd,even,pos,neg;
	printf("input length of the array\n");
	scanf("%d",&n);
	printf("input array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	//odd=a[i];even=a[i];pos=a[i];neg=a[i];
	{
		if(a[i]%2==0)
		{
			printf("%d is even\n",a[i]);
		}
		else
		{
			printf("%d is odd\n",a[i]);
		}
		if(a[i]>0)
		{
			printf("%d is positive\n",a[i]);
		}
		if(a[i]<0)
		{
			printf("%d is negative\n",a[i]);
		}
	}
	return 0;
}
	

