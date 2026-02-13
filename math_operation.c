#include<stdio.h>

int main(){
               float a,b,sum,sub,mul,div;

               printf("Enter two numbers = ");
               scanf("%f %f", &a,&b);

               sum = a+b;
               sub = a-b;
               mul = a*b;

               printf("Sum = %.2f\n", sum);
               printf("Subtraction = %.2f\n", sub);
               printf("Multiplication = %.2f\n", mul);

               if (b != 0){
                              div = a/b;
                              printf("Division = %.2f", div);
               }else{
                              printf("Division by zero is not possible (Denominator is zero)");
               }
               return 0;

}