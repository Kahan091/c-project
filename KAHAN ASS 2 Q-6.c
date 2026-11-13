//Program 6: Total, average and grade of three subjects

#include <stdio.h>
int main(void)
 {
  float a,b,c,total,avg;
  scanf("%f%f%f",&a,&b,&c);
  total=a+b+c;
  avg=total/3;
  printf("Total = %.2f\nAverage = %.2f\n",total,avg);
  if(a<35 || b<35 || c<35) printf("Grade = Fail\n");
  else if(avg>=70) printf("Grade = Distinction\n");
  else if(avg>=60) printf("Grade = First\n");
  else if(avg>=50) printf("Grade = Second\n");
  else if(avg>=35) printf("Grade = Third Class\n");
  else printf("Grade = Fail\n");
  return 0;
 }
