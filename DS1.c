#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert();
void delete();
int n,i,arr[20],value,pos;
void main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1.create\n 2.display\n 3.insert\n 4.delete\n 5.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:exit(0);
            default:printf("invalid choice");
        }

    }
}
void create()
{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display()
{
    printf("The array elements are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void insert()
{
    printf("Enter the position to insert the element\n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted\n");
    scanf("%d",&value);
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
}
void delete()
{
    printf("Enter the position at which you need to delete the elements\n");
    scanf("%d",&pos);
    printf("The array element is %d\n",arr[pos]);
    for(i=pos;i<=n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
}
