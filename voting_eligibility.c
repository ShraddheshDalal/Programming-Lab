#include<stdio.h>

int main()
{
	int a;
	printf("enter your age");
	scanf("%d",&a);
	if(a>18)
	{
		printf("You are elegible for voting");
	}
	else
	printf("wait for %d years to vote",18-a);
	return 0; 
}
