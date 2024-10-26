#include<stdio.h>
#include<stdlib.h>
#define maxsize 3
int choice,item,count=0,q[10],i,r=-1,s,f=0;
void insert()
{
    if(count==maxsize)
        printf("Queue overflow\n");
    else
    {
        printf("Enter the item\n");
        scanf("%d",&item);
        r=r+1%maxsize;
        q[r]=item;
        count=count+1;
    }
}
void delete()
{
    if(count==0)
        printf("Queue underflow\n");
    else
    {
        item=q[f];
        f=f+1%maxsize;
        printf("The deleted item %d\n",item);
        count=count-1;
    }
}
void display()
{
    if(count==0)
        printf("Queue underflow\n");
    else
    {
        s=f;
        for(i=1;i<=count;i++)
        {
            printf("%d\n",q[s]);
            s=s+1%maxsize;
        }
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
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            default:exit(0);
        }
    }
}

