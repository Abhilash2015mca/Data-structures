#include <stdio.h>
int main() 
{
  int i, x[6], mul = 1;
  printf("Enter 6 numbers: ");
  for(i = 0; i < 6; ++i) 
{
      scanf("%d", x+i);
      mul *= *(x+i);
  }
 printf("mul = %d", mul);
  return 0;
}