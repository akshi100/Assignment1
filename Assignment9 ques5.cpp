#include <stdio.h>
int main() 
{
   int year;
   printf("Enter days in Year: ");
   scanf("%d",&year);

   
   if (year % 366 == 0) {
    printf("%d is leap year",year);
   }
   else if (year % 365 == 0) {
   printf("%d is not leap year",year);
   }
   else {
    printf("%d is not leap year",year);
   }
   return 0;
}
