#include<stdio.h>
void swap();
int main()
{
	int a=23;
	int b=65;
	printf("The numbers before swapping are :%d and %d",a,b);
	swap(a,b);
	printf("\n The numbers after swapping outside the function are :%d and %d",a,b);	
}
void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n The numbers after swapping inside the function are : %d and %d ",x,y);
}
