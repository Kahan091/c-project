//Program 15: Sum and mean of any n values

#include <stdio.h>
 int main(void)
 {
int n;
double x,s=0;
scanf("%d",&n);
 for(int i=1;i<=n;i++)
{scanf("%lf",&x); s+=x;}
 printf("Sum = %.2f\nMean = %.2f\n",s,s/n);
return 0;
}
