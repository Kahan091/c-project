//Program 14: Sum and mean of any 10 values
#include <stdio.h>
int main(void)
{
double x,s=0;
for(int i=1;i<=10;i++)
{scanf("%lf",&x);s+=x;}
printf("Sum = %.2f\ nMean = %.2f\n",s,s/10);
return 0;
}

//Sample Input:5 10 20 30 40 50
//Sample Output: Sum = 150.00 Mean = 30.00
