//Program 13: Convert bytes into KB, MB and GB

#include <stdio.h>
int main(void)
{
  double bytes;
  scanf("%lf", &bytes);
  printf("KB = %.2f\n", bytes / 1024);
  printf("MB = %.2f\n", bytes / (1024 * 1024));
  printf("GB = %.2f\n", bytes / (1024 * 1024 * 1024));
  return 0;
  }

//OUTPUT
//Sample Input--> 1048576
//Sample Output KB = 1024.00 MB = 1.00 GB = 0.00
