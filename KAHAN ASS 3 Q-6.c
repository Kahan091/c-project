//Program 6: Print 1st n even numbers

#include <stdio.h>
int main(void)
{
 int n;
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 printf("%d ",2*i);
 printf("\n");
 return 0;
  }

//Sample Input:5
//Sample Output: 2 4 6 8 10
