#include<stdio.h>
int main()
{
	int num;
	printf("Enter A Value Between 1-100 : ");
	scanf("%d", &num);
	if(num>50)
	printf("\n%d SUCCESS");
	else
	printf("\n%d FAIL");
	return 0;
}
