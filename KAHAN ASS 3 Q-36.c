//Program 36: Series 35(B) – nested loop

#include <stdio.h>
 int main(void)
 {
for(int i=1;i<=3;i++)
for(int j=1;j<=i;j++)
 printf("%d %d\n",i,j);
return 0;
 }

// Sample Output:  1 1
//                 2 1
//                 2 2
//                 3 1
//                 3 2
//                 3 3
