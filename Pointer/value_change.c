#include <stdio.h>

int main()
{
    int* pc, c;
c = 50;
pc = &c;
*pc = 10;
printf("%d\n", *pc);  
printf("%d\n", c);   

    return 0;
}