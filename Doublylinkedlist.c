#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    struct node *prev;
    int ssn;
    char name[20],dept[20],desg[20],phno[20];
    float sal;
    struct node *next;
}*first=NULL,*temp=NULL,*temp1=NULL;
void create()
{
    int ssn;
    char name[20],dept[20],desg[20],phno[20];
    float sal;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter ssn,name, department, designation,salary and phone number of a employee:\n");
    scanf("%d%s%s%s%f%s",&ssn,&name,&dept,&desg,&sal,&phno);
    temp->ssn=ssn;
    temp->sal=sal;
    strcpy(temp->name,name);
    strcpy(temp->dept,dept);
    strcpy(temp->desg,desg);
    strcpy(temp->phno,phno);
    temp->next=NULL;
    temp->prev=NULL;
}
void insert_atfirst()
{
    create();
    if (first == NULL)
        first = temp;
    else
    {
        temp->next = first;
        first->prev = temp;
        first = temp;
    }
}
void insert_atlast()
{
    create();
    if(first==NULL)
        first = temp;
    else
    {
        temp1=first;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
        temp->prev=temp1;
    }
}
void display()
{
    int count = 0;
    temp1=first;
    if(first == NULL)
        printf("List is empty\n");
    else
    {
        printf("\n Linked list elements from beginning : \n");
        printf("SSN\t NAME\t DEPARTMENT\t DESIGNATION\t SALARY\tPhNO\n");
        while (temp1!= NULL)
        {
            printf("%d\t%s\t%s\t%s\t%f\t%s\n", temp1->ssn, temp1->name,temp1->dept,temp1->desg,temp1->sal,temp1->phno );
            temp1 = temp1->next;
            count++;
        }
        printf(" No of employee = %d\n", count);
    }
}
void deleteend()
{
    if(first==NULL)
        printf("list is empty");
    else
    {
        temp1=first;
        if(first->next==NULL)
            first=NULL;
        else
        {
            while(temp1->next!=NULL)
                temp1=temp1->next;
            (temp1->prev)->next=NULL;
        }
        printf("%d\t%s\t%s\t%s\t%f\t%s\n", temp1->ssn, temp1->name,temp1->dept,temp1->desg,temp1->sal,temp1->phno );
        free(temp1);
    }
}
void deletefront()
{
    if(first==NULL)
        printf("list is empty\n");
    else
    {
        temp1=first;
        if(first->next==NULL)
            first=NULL;
        else
        {
            first=first->next;
            first->prev=NULL;
        }
        printf("%d\t%s\t%s\t%s\t%f\t%s\n", temp1->ssn, temp1->name,temp1->dept,temp1->desg,temp1->sal,temp1->phno );
        free(temp1);
    }
}
void main()
{
    int ch,n,i;
    while (1)
    {
        printf("-----------------MENU----------------------\n");
        printf("\n 1 - create a DLL of n emp");
        printf("\n 2 - Display from beginning");
        printf("\n 3 - Insert at end");
        printf("\n 4 - delete at end");
        printf("\n 5 - Insert at beg");
        printf("\n 6 - delete at beg");
        printf("\n 7 - exit\n");
        printf("-------------------------------------------\n");
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:printf("\n Enter no of employees : ");
            scanf("%d", &n);
            for(i=0; i<n; i++)
                insert_atlast();
            break;
        case 2:display();
            break;
        case 3:insert_atlast();
            break;
        case 4:deleteend();
            break;
        case 5:insert_atfirst();
            break;
        case 6:deletefront();
            break;
        case 7:exit(0);
        default:printf("wrong choice\n");
        }
    }
}
