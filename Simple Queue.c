#include<stdio.h>
#include<stdlib.h>
#define quesize 3
int choice,item,front=0,rear=-1,q[10],i;
void insertrear()
{
    printf("Enter item to insert\n");
    scanf("%d",&item);
    if(rear==quesize-1)
        printf("Queue overflow\n");
    else
    {
        rear=rear+1;
        q[rear]=item;
    }
}
void deletefront()
{
    if(front==-1||front>rear)
        printf("Queue underflow\n");
    else
    {
        item=q[front];
        front=front+1;
        printf("The deleted item %d\n",item);
    }
}
void display()
{
    if(front==-1||front>rear)
        printf("Queue underflow");
    else
    {
        printf("The queue elements are:\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",q[i]);
    }
}
void main()
{
    for(;;)
    {
        printf("Enter choice\n");
        printf("1:insert\t 2:delete\t 3:display\t 4:exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insertrear();
            break;
            case 2:deletefront();
            break;
            case 3:display();
            break;
            default:exit(0);
        }
    }
}

