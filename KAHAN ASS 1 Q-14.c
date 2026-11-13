//Program 14: Convert Celsius into Fahrenheit

#include <stdio.h>
int main(void)
{
  float c;
  scanf("%f", &c);
  printf("Fahrenheit = %.2f\n", (9.0/5.0)*c + 32);
  return 0;
  }

//OUTPUT
//Sample Input--> 25
//Sample Output Fahrenheit = 77.00
