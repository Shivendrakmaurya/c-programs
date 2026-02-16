// C program to find the largest of three numbers

#include <stdio.h>
int main()
{
               int a, b, c;

               // Input three numbers from user
               printf("Enter three numbers = ");
               scanf("%d%d%d", &a, &b, &c);

               // Checking the largest number among a,b and c
               if (a >= b && a >= c)
               {
                              printf("Largest number is = %d", a);
               }
               else if (b >= a && b >= c)
               {
                              printf("Largest number is = %d", b);
               }
               else
               {
                              printf("Largest number is = %d", c);
               }

               return 0;
}