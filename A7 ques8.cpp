#include <stdio.h>

int main()
{
   int a,b,c,d;
   printf("Enter the value of a,b & c: ");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
    printf("Both roots are real & equal\n");
    }
   
   else if(d>0)
	{
   printf("Both roots are real & distinct\n");
 }
	else
   {printf("Root are imaginary;\n");}
     
return 0;

}

