#include<stdio.h>
int rev();
int main()
{
	printf("The reversed number is :%d",rev());
}
int rev()
{
	int n,rev,rem;
	rev=0;
	printf("Enter the number you want to reverse :\n");
	scanf("\n%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
