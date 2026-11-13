//Program 10: Factorial of a given number


#include <stdio.h>
int main(void)
{
int n;
long long f=1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
f*=i;
printf("%d! = %lld\n",n,f);
 return 0;
  }

//Sample Input: 5
//Sample Output 5! = 120
