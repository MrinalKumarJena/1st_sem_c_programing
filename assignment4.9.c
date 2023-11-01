#include<stdio.h>
int main()
{
	int n;
	printf("enter any 3 number to check");
	scanf("%d" ,&n);
        int fd=n/100;
	int ld=n%10;
	if(fd==ld)
	{
		printf(" is a pallindrome number\n" ,n);
	}
	else
	{
		printf(" is not a pallindrome number");
	}
	return 0;
}
