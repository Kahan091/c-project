//Program 10: Convert dollars into pound (1 $ = 94.913 Rs.; 1 pound =127.10Rs.)

#include <stdio.h>
 int main(void)
  {
  float dollars;
  scanf("%f", &dollars);
  printf("Pounds = %.2f\n", dollars * 94.913 / 127.10);
  return 0;
  }
