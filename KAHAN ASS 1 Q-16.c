//Program 16: Calculate interest I = PRN/100

#include <stdio.h>
 int main(void)
  {
  float p, r, n;
  scanf("%f%f%f", &p, &r, &n);
  printf("Interest = %.2f\n", p*r*n/100);
  return 0;
  }

//OUTPUT
//Sample Input-->10000,5,2
//Sample Output Interest = 1000.00
