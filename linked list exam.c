#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int item;
void insert();
void delete_value();
void display();
void main()
{
    int choice;
    while(1)
    {
        printf("\n\n1.insertion in linked list\n2.Deletion \n3.display\n4.exit\nenter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    display();
                    break;
            case 2:delete_value();
                   display();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default:
                   printf("invalid choice !!\n");
                   
        }
        
    }
}
void insert()
{
    struct node *new,*ptr;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element\n");
    scanf("%d",&new->data);
    new->next=NULL;
    
    if(head==NULL)
    {
        head=new;
    }
    else
        ptr=head;
       while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    
}
void delete_value()
{
    int value;
    struct node *ptr,*temp;
    printf("enter the value you want to delte\n");
    scanf("%d",&value);
    ptr=head;
    temp=head->next;
    while(temp->data!=value && temp->next!=NULL)
    {
        ptr=ptr->next;
        temp=temp->next;
    }
    if(temp->data==value)
    {
        ptr->next=temp->next;
        free(temp);
        printf("%d is deleted\n",value);
    }
    else if(head->data==value)
    {
        ptr=head;
        temp=ptr;
        head=head->next;
        free(temp);
         printf("%d is deleted\n",value);
    }
    else
    {
         printf("\n\n%d is not present in linked list\n",value);
    }
}
    
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("linked list is empty\n");
        
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
    }
}
