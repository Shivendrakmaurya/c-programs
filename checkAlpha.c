// C program to check whether the entered character is vowel or consonant
#include <stdio.h> 
#include <conio.h> 

int main()
{
               char alpha;

               // Taking input from user
               printf("Enter an alphabet = ");
               scanf("%c", &alpha);

               // Switch statement to check whether entered character is vowel or consonant
               switch (alpha)
               {
               // Checking for lowercase vowels
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':

               // Checking for uppercase vowels
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':printf("%c is a vowel", alpha);
               break; // Exit switch statement

               // If character is not a vowel
               default:
                              printf("%c is a consonant", alpha);
               }

               return 0; 
}
