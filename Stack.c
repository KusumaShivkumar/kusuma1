#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void push();
void pop();
void display();
int s[10],top=-1;
void main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1:push\t 2:pop\t 3:display\t 4:exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("invalid choice");
        }
    }
}
void push()
{
    int elem;
    if(top==maxsize-1)
        printf("The stack is full");
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&elem);
        top=top+1;
        s[top]=elem;
    }
}
void pop()
{
    int delelem;
    if(top==-1)
        printf("The stack is empty\n");
    else
    {
        delelem=s[top];
        printf("The deleted element is %d\n",delelem);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("the stack is empty");
    else
    {
        printf("Stack elements are\n");
        for(i=0;i<=top;i++)
            printf("%d\n",s[i]);
    }
}
