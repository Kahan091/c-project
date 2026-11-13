//Program 9: Sum of 1st n even numbers

#include <stdio.h>
int main(void)
{
int n,s=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
s+=2*i;
printf("Sum = %d\n", s);
return 0;
  }

//Sample Input:5
//Sample Output: Sum = 30
