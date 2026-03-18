#include <stdio.h>

int main()
{
               char inp;
               // Prompt the user to enter a character
               printf("Enter a character: ");
               scanf("%c", &inp);

               // Check if the input is an alphabet, digit, or special character
               if ((inp >= 'a' && inp <= 'z') || (inp >= 'A' && inp <= 'Z'))
               {
                              printf("You entered a valid alphabet: %c\n", inp);
               }
               else if (inp >= '0' && inp <= '9')
               {
                              printf("You entered a digit: %c\n", inp);
               }
               else
               {
                              printf("You entered a special character: %c\n", inp);
               }

               return 0;
}