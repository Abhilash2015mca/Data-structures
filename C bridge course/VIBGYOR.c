#include <stdio.h>
#include <conio.h>

void main()
{    
    char l;
    printf("Enter any letter from VIBGYOR:");
    scanf("%c",&l);
    if (l=='V'||l=='v')
    {
    	printf("Violet");
    }
    else if (l=='I'||l=='i')
    {
    	printf("Indigo");
    }
     else if (l=='B'||l=='b')
    {
    	printf("Blue");
    }
     else if (l=='G'||l=='g')
    {
    	printf("Green");
    }
     else if (l=='Y'||l=='y')
    {
    	printf("Yellow");
    }
     else if (l=='O'||l=='o')
    {
    	printf("Orange");
    }
     else if (l=='R'||l=='r')
    {
    	printf("Red");
    }
    else
    {
        printf("Wrong input");
    }
   

}