//Program 21: Calculate net salary

#include <stdio.h>
int main(void)
 {
  float gross, allowance, deduction, net;
  scanf("%f", &gross);
  allowance = 0.10 * gross;
  deduction = 0.03 * gross;
  net = gross + allowance - deduction;
  printf("Net salary = %.2f\n", net);
  return 0;
 }

//OUTPUT
//Sample Input--> 50000
//Sample Output Net salary = 53500.00
                        }

