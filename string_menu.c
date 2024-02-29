#include<stdio.h>
int main()
{
	int n;
	char str1[20];
	char str2[20];
	printf("Enter string 1 :");
	scanf("%s",str1);
	printf("Enter string 2 :");
	scanf("%s",str2);
	printf("What operation you want to perform on your strings :\n1.length\n2.copy\n3.concatenate\n4.reverse\n");
	printf("Enter the number of operation you want to perform on your strings :");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("The length of string 1 is :%d\n",strlen(str1));
			printf("The length of string 2 is :%d\n",strlen(str2));
			break;
		case 2:
			printf("The copied string is :%s",strcpy(str2,str1));
			break;
		case 3:
			printf("The concatinated strings are :%s",strcat(str1,str2));
			break;
		case 4:
			printf("The reversed strings are : %s and %s",strrev(str1),strrev(str2));
			break;
		default:
			printf("You entered invalid choice");
	}

	
	
	
}

