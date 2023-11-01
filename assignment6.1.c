/*to compute 1+2+3+...+n*/
#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("enter n numbers : ");
	scanf("%d" ,&n);
	for(int i=0; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
}
