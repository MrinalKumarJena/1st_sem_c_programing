//program to multiply the content of two array and store the result in third party 
#include<stdio.h>
int main()
{
	int arr3[5], len, i=0;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	len=sizeof(arr1)/sizeof(arr1[0]); 
	for(i=0;i<len;i++)
	{
		arr3[i]= arr1[i]*arr2[i];
	}
	for(i=0;i<len;i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
}
