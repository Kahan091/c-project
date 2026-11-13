//Program 7: Sum of n natural numbers

#include <stdio.h>
 int main(void)
 {
int n,s=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
s+=i;
printf("Sum = %d\n",s);
return 0;
    }

//Sample Input: 10
//Sample Output: Sum = 55
