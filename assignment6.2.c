/*to compute sum of square of first n matural numbers*/
#include<stdio.h>
void main()
{
        int sum=0,n,i;
        printf("enter n natural numbers : ");
        scanf("%d" ,&n);
        for(int i=0; i<=n; i++)
        {
                sum=sum+(i*i);
        }
        printf("%d\n",sum);
}

