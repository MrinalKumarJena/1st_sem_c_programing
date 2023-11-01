//FINDING MAXIMUM MINIMUM AND AVERAGE OF AN ARRAY
#include <stdio.h>
void main()
{
    int arr1[100];
    int i, mx, mn, n,sum=0;
    int avg;
       printf("GIVE INPUTS FOR CHECKING\n");
       printf("ENTER THE SIZE OF ARRAY :");
       scanf("%d",&n);
       printf("ENTER %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
              printf("element - %d : ",i);
              scanf("%d",&arr1[i]);
            }
    mx = arr1[0];
    mn = arr1[0];
    for(i=0; i<n; i++)
    {
	    sum=sum+arr1[i];
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
	}
    avg=sum/n;
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
    printf("AVERAGE OF THE ARRAY:%d\n",avg);
}

