#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void insert();
void delete();
void display();
int rear = -1;
int front = -1;
int queue_array[MAX];
void main()
{
    int choice;
    while(1)
    {
        printf("\n Queue Operations:\n");
        printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
        printf("\nEnter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice\n");
            break;
        }

    }
}
 void insert()
 {
     int value;
     if(rear==MAX-1)
     {
         printf("\nStack is overflow\n");
     }
     else
     {
         if(front==-1)

                front = 0;
                printf("\nEnter the value to be inserted in the queue\n");
                scanf("%d",&value);
                rear++;
                queue_array[rear]=value;

     }

 }

 void delete()
 {
     if(front==-1||front>rear)
     {
         printf("\nQueue is empty\n");
         return;
     }
     else
     {
         printf("\nElement deleted from queue is :%d",queue_array[front]);
         front++;
     }
 }

 void display()
 {
     int i;
     if(front==-1)
     {
         printf("\nQueue is empty\n");
         return;
     }
     else
     {
         printf("\nElements in queue are:\n");
         for(i=front;i<=rear;i++)
         {
             printf("%d",queue_array[i]);
             printf("\n");
         }
     }
 }