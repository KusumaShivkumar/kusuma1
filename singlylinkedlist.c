#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
 int sem;
 char name[20],prgm[10],usn[20],phno[20];
 struct node *next;
}*first=NULL,*temp=NULL,*temp1=NULL,*prev;
void create()
{
 int sem;
 char name[20],prgm[10],usn[20],phno[20];
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\n Enter usn,name,programme,sem,phno of student : ");
 scanf("%s%s%s%d%s",&usn,&name,&prgm,&sem,&phno);
 strcpy(temp->usn,usn);
 strcpy(temp->name,name);
 strcpy(temp->prgm,prgm);
 temp->sem = sem;
 strcpy(temp->phno,phno);
 temp->next=NULL;
}

void insert_atfirst()
{
 create();
 if (first == NULL)
 first = temp;
 else
 {
 temp->next = first;
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
 }
}

void display()
{
 int count=0;
temp1=first;
 if(first == NULL)
 printf("List empty to display \n");
 else
 {
 printf("\n Linked list elements from begining : \n");
 printf("USN\t NAME\t PROGRAMME\t SEM\t PhNO\n");
 while (temp1!= NULL)
 {
 printf("%s\t%s\t%s\t%d\t%s\n", temp1->usn, temp1->name,temp1->prgm,temp1->sem,temp1->phno );
 temp1 = temp1->next;
 count++;
 }
 printf(" No of students = %d\n", count);
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
 {
 prev=temp1;
 temp1=temp1->next;
 }
 prev->next=NULL;
 }
 printf("delete node is %s\t%s\t%s\t%d\t%s\n", temp1->usn, temp1->name,temp1->prgm,temp1->sem,temp1->phno);
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
 first=first->next;
 printf("%s\t%s\t%s\t%d\t%s", temp1->usn, temp1->name,temp1->prgm,temp1->sem, temp1->phno );
 free(temp1);
 }
}

void main()
{
 int ch,n,i;
 while (1)
 {
 printf("-----------------MENU----------------------\n");
 printf("\n 1 create a SLL of n emp");
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
 case 1: printf("\n Enter no of students : ");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 insert_atfirst();
 break;
 case 2: display();
 break;
 case 3:insert_atlast();
 break;
 case 4:deleteend();
 break;
 case 5: insert_atfirst();
 break;
 case 6: deletefront();
 break;
 case 7: exit(0);
 default: printf("wrong choice\n");
 }
 }
}
