//Write a program to pass a string as function using pointer
#include<stdio.h>
void str(char *ptr)
{
	printf("The string passed by the user is : %s",ptr);
}
int main()
{
	char a[20]="This is a string";
	str(a);
}
