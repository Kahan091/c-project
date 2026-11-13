//Program 24: Swap two values

#include <stdio.h>
 int main(void)
  {
  float a, b, temp;
  scanf("%f%f", &a, &b);
  temp=a; a=b; b=temp;
  printf("After swap: a = %.2f, b = %.2f\n", a, b);
  return 0;
  }

//OUTPUT
//Sample Input--> 10 20
//Sample Output After swap: a = 20.00, b = 10.00
