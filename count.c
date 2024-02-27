#include<stdio.h>
int cnt=0;
int count(int n)
{
	if (n>0)
	{
		cnt++;
		count(n/10);
	}
	else
	{
		return cnt;
	}
}
int main()
{
	int c,n;
	printf("Enter a number :");
	scanf("%d",&n);
	c=count(n);
	printf("The digit count of the entered number is :%d",c);
}
