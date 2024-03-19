#include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum(int a,int b)
{
	a=25;
	b=12;
	printf("The sum of two given numbers is :%d",a+b);
}
