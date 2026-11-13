//Program 2: Largest and smallest of three values

#include <stdio.h>
 int main(void)
  {
         int a,b,c,max,min;
          scanf("%d%d%d",&a,&b,&c);
             max=min=a;
if(b>max) max=b;if(c>max) max=c;
if(b<min) min=b;if(c<min) min=c;
printf("Largest = %d\nSmallest = %d\n",max,min);
return 0;
  }

  //OUTPUT
  //Sample Input-->10 25 15
  // Sample Output Largest = 25 Smallest = 10
