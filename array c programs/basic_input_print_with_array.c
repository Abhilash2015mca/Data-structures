// take 10 values, store in array and print 
#include <stdio.h>

int main() {
  int values[5];

  printf("Enter 10 integers: ");

  
  for(int i = 0; i < 10; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  
  for(int i = 0; i < 10; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}