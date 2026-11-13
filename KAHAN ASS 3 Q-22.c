//Program 22: Count digits of a given number

 #include <stdio.h>
 int main(void)
 {
int n,c=0;
scanf("%d",&n);
 if(n==0)c=1;
  while(n){c++;n/=10;}
  printf("Digits = %d\n",c);
  return 0;
   }

//Sample Input: 351
//Sample Output: Digits = 3
