//Enter array elements using pointer
#include<stdio.h>
int main()
{
	int n,i;
	int array[n];
	printf("Enter the number of elements of the array :");
	scanf("%d",&n);
	printf("Enter the elements of the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		int *ptr=&array[i];	
		printf("The array element %d is : %d\n",i,*ptr);
	}
}
