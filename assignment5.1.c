//ELECTRIC BILL
#include <stdio.h>
void main()
{
	int previous,present,x,price=0;
	printf("ENTER THE PREVIOUS READING:\n");                  
	scanf("%d",&previous);
	printf("ENTER THE PRESENT READING:\n");
        scanf("%d",&present);
	x=previous-present;
	if(x>100)
	{
		price=price+100*1.4;
		x=x-100;
	}
	else
	{
		price=price+x*1.4;
		x=x-100;
	}
	if(x>100)
	{
		price=price+100*2.5;
		x=x-100;
	}
	else
	{
		price=price+x*2.5;
		x=0;
	}
	if(x>0)
	{
		price=price+x*3.2;
	}
	printf("ELECTRIC BILL OF THE COSTUMER IS:%d",price);
}


	 

