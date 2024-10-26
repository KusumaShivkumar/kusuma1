#include<stdio.h>
#include<stdlib.h>
int n,i,arr[20],value,pos;
void display();
void insert();
void delete();
void main()
{
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=1;i<=n;i++)
          scanf("%d",&arr[i]);
    int choice;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1.insert\t 2.delete\t 3.display\t 4.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("invalid choice");
        }
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
void display()
{
    printf("The array elements are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
