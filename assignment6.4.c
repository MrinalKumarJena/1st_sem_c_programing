/*to compute factorial of a number*/
#include<stdio.h>
void main()
{
	int n,i,sum=1;
        printf("enter a numbers : ");
        scanf("%d" ,&n);
        for(int i=n; i>=1; i--)
        {
                sum=sum*i;
        }
        printf("factorial of %d\n",sum);
}

