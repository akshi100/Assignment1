#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%3==0)
	{
	printf("%d is divisible by 3",num);
	}
	else if(num%2==0)
	{
	printf("%d is divisible by 2",num);
	}
	else
	printf("%d is not divisible by 3 and 2");
}
