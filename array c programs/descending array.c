#include<stdio.h>
int main()
{
int number[10],n,i,j,a;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the numbers\n");
for(i=0;i<n;i++)
scanf("%d",&number[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(number[i]<number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the number in descending order\n");
for(i=0;i<n;i++)
printf("%d\n",number[i]);

}