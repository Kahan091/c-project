Program 5: Add, multiply, subtract and divide two numbers

#include <stdio.h>
 int main(void)
  {
  float a, b;
  scanf("%f%f", &a, &b);
  printf("Sum = %.2f\n", a + b);
  printf("Difference = %.2f\n", a - b);
  printf("Product = %.2f\n", a * b);
  printf("Division=%.2f\n",a/b);          //B!= O
  return 0;
  }

//OUTPUT
//Sample Input-->20&5
//Sample Output
//Sum = 25.00
//Difference = 15.00
//Product = 100.00
//Quotient = 4.00
