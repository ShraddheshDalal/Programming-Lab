#include<stdio.h>
int main()
{
	int n,i;
	int arr[20];
	printf("Enter the number of elements the array contains :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter the elements of the array %d :",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("greatest number is %d",arr[0]);
	return 0;
}
