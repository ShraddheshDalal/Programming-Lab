#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the two numbers to be added :\n");
	scanf("%d",&a);
	scanf("\n %d",&b);
	int *ptr=&a;
	int *qtr=&b;
	sum=*ptr+*qtr;
	printf("The sum of the entered two numbers is :%d",sum);
	
}
