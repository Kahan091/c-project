//Program 22: Calculate net sales

#include <stdio.h>
int main(void)
 {
  float gross, discount, net;
  scanf("%f", &gross);
  discount = 0.10 * gross;
  net = gross - discount;
  printf("Net sales = %.2f\n", net);
  return 0;
 }

//OUTPUT
//Sample Input--> 20000
//Sample Output Net sales = 18000.00
