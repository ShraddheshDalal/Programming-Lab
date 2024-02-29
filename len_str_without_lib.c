#include<stdio.h>
int main()
{
	int count,i;
	char str1[20];
	printf("Enter the string :");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		count++;

	}
	printf("The length of the string is :%d",count);
}
