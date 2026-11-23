#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
  float a, b, sum, diff, prod, quot,rem;

  printf("Enter the first number\n");
  scanf("%f",&a);
  printf("Enter the second number\n");
  scanf("%f",&b);
  
  sum = a+b;
  printf("the sum of the two numbers is %f\n", sum);
  
  diff = a-b;
  printf("the difference of the two numbers is %f\n", diff);
 
  prod = a*b;
  printf("the poroduct of the two numbers is %f\n", prod);
  
  if (b == 0){
  printf("division by zero is not possible\n");
  }
  else{
  quot = a/b;
  rem = fmod(a,b);
  
  printf("the quotient and the reminder are %f and %f\n", quot, rem);
  }
  return 0;
}
