//Program 3: Net salary with slab allowances/deductions

#include <stdio.h>
 int main(void)
  {
float g,a,d,n;
scanf("%f",&g);
if(g>10000)
    {
        a=.10*g; d=.03*g;
    }
   else if
   (g>5000)
   {
    a=.07*g; d=.02*g;
    }
    else
    {
    a=0; d=0;
    }
    n=g+a-d;

    printf("Allowance = %.2f\nDeduction = %.2f\nNet salary = %.2f\n",a,d,n);
    return 0;
    }

//OUTPUT
//Sample Input--> 20000
//Sample Output--> Allowance = 2000.00 Deduction = 600.00 Net salary = 21400.00
