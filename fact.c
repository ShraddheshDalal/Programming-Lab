#include<stdio.h>
int fact();
int main()
{
	printf("The factorial of the entered number is %d",fact());
	
}
int fact()
{
	int n,i,f;
	printf("Enter any number");
	scanf("%d",&n);
	f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
