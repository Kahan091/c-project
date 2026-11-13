//Program 13: Sum of numbers divisible by 13 from 1 to 100

#include <stdio.h>
 int main(void)
 {
int s=0;
 for(int i=1;i<=100;i++)
if(i%13==0)
s+=i;
printf("Sum = %d\n",s);
 return 0;

}

//Sample Output: Sum = 390
