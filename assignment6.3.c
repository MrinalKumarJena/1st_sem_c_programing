/*sum of the series 1+7+7*7+7*7*7+.....+nth term*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=1,i;
	printf("enter n numbers : ");
	scanf("%d" ,&n);
	for(int i=1; i<=n; i++)
	{
		sum=sum+pow(7,i);
	}
	printf("%d\n" ,sum);
}

