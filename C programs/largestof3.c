// largest of three numbers
#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    
    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    
    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);
