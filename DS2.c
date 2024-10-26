#include<stdio.h>
#include<stdlib.h>
void create();
void display();
int n,i,arr[20],value,pos;
void main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1.create\n 2.display\n 3.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:exit(0);
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
        printf("%d\n",arr[i]);
    }
}
