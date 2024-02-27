//write a program to n numbers of elements in an array and display the largest element of that array using loops
#include<stdio.h>
int main()
{
	int i,n,arr[30];
	printf("Enter the number of array elements :");
	scanf("%d",&n);
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++) 
	{
    	if(arr[0]<arr[i]) 
		{
     	 arr[0]=arr[i];
   		}
  	}
  	printf("The largerest element in the array is :%d",arr[0]);
  	return 0;
}








