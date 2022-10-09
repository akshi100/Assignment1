#include <stdio.h>

int main(void) {
	float INR;

	printf("Amount In INR:");
	scanf("%f", &INR);

	float USD = INR / 80;

	printf("%f USD", USD);
}
