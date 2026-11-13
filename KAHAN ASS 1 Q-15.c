//Sample Input 25 Sample Output Fahrenheit = 77.00

#include <stdio.h>
int main(void)
{
  float f;
  scanf("%f", &f);
  printf("Celsius = %.2f\n", (5.0/9.0)*(f - 32));
  return 0;

}

//OUTPUT
//Sample Input--> 77
//Sample Output Celsius = 25.00
