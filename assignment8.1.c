//program to update particular location of an array with a given value 
#include <stdio.h>
void main()
{
   int a[5]={2,4,8,1,7},t,s,i,n;
  printf("Enter the position to be update:");
  scanf("%d",&t);
  printf("Enter the value to be update:");
  scanf("%d",&s);
  for(i=0;i<5;i++)
  {
    if(i==t)
    {
       a[i]=s;
    }
  }
  printf("\nUpdated value is:");
  for(i=0;i<5;i++)
  {
    printf("\na[%d]=%d\n",i,a[i]);
  }
  
}
