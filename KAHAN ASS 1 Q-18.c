//Program 18: Area & perimeter of a rectangle

#include <stdio.h>
int main(void)
 {
  float a, b;
  scanf("%f%f", &a, &b)
  printf("Area = %.2f\n", a*b);
  printf("Perimeter = %.2f\n", 2*(a+b));
  return 0;
   }

//OUTPUT
//Sample Input--> 10&5
//Sample Output   Area = 50.00 Perimeter = 30.00
