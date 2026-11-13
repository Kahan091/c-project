//Program 5: Net sales with discount slabs

#include <stdio.h>
 int main(void)
  {
  float s,d,n;
  scanf("%f",&s);
  if(s>20000) d=.15*s;
  else if(s>10000) d=.10*s;
  else d=.05*s;
  n=s-d;
  printf("Discount = %.2f\nNet sales = %.2f\n",d,n);
  return 0;
  }

//OUTPUT
//Sample Input--> 25000
//Sample Output--> Discount = 3750.00 Net sales = 21250.00
