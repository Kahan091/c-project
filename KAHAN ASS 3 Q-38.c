//Program 38: Series 35(D) – nested loop

#include <stdio.h>
 int main(void)
 {
for(int i=5;i>=2;i--)
for(int j=1;j<=2;j++)
 printf("%d %d\n",i,j);
return 0;
 }

//SAMPLE OUTPUT:
//5 1
//5 2
//4 1
//4 2
//3 1
//3 2
//2 1
//2 2
