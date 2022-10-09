#include<stdio.h>

int main() {
   int a, b;
   printf("Enter the value of a and b: ");
   scanf("%d %d", &a, &b);
   printf("Before swapping a=%d, b=%d ", a, b);
   a = b;
   b = a;
   printf("After swapping a=%d, b=%d", a, b);
   return 0; 
}
