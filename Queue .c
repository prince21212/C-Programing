#include<stdio.h>
#include<stdlib.h>
#define max 6
int queue[max];
int front=-1;
int rear=-1;
void insert()
{
    int item;
    if(rear==max-1 || front==max-1)
     {
         printf("queue overflow\n");
     }
    else
    {
     
         
        printf("enter the item\n");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
        front=0;
        

      
    }
}
void delete()
{
    if(front==-1||front > rear)
    {
        printf("queue is empty\n");

    }
    else
    {
       
        printf("deleted element is %d\n",queue[front]);
        front=front+1;
    }
}
void display()
{
  int i;
    if(front==-1||front>rear )
    {
        printf("queue is empty\n");
    }
    else
    {
       
        for(i=front;i<=rear;i++)
        {
            printf("item of %d : %d\n",i,queue[i]);
            
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:
            printf("invalid choice\n");
        }
    }
}

