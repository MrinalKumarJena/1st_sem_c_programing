//program using user defined functiom to sort an array of integer with pointer as argument
#include<stdio.h>
void sort(int n,int*ptr)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
				t=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=t;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",*(ptr+i));
}
int main()
{
	int n,arr[20],i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter your elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(n,arr);
	return 0;
}
