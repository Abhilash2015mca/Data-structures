#include<stdio.h>
void main()
{
    int x[5]={1,2,3,4,5};
  
    printf("Elemets of the array are:\n");
    
    for(int i=0;i<5;i++)
    {
      printf("%d\n",*(x+i));
      
    }

}