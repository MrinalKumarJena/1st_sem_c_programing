//program to find string length with out using library function 
#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("enter a string :");
	scanf("%s",s);
	for(i=0;s[i]!='\0';++i);
	printf("length of the string is %d\n",i);
}
