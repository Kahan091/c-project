//Program 21: Separate digits of a given number

#include <stdio.h>
 int main(void)
 {
int n,d;
scanf("%d",&n);
while(n>0){d=n%10; printf("%d ",d); n/=10;}
printf("\ n");
return 0;
 }
//Sample Input:351
//Sample Output: 1 5 3
