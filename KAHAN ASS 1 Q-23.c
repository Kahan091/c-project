//Program 23: Average of three subjects with total

#include <stdio.h>
int main(void)
 {
  float a, b, c, total, avg;
  scanf("%f%f%f", &a, &b, &c);
  total = a+b+c;
  avg = total/3;
  printf("Total = %.2f\nAverage = %.2f\n", total, avg);
  return 0;

 }

//OUTPUT
//Sample Input--> 80 70 90
//Sample Output Total = 240.00 Average = 80.00
