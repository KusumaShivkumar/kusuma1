#include<stdio.h>
struct employee_dob
{
    int day,month,year;
};
struct employee
{
    char name[20];
    int salary;
    struct employee_dob date;
};
int main()
{
    int i;
    struct employee s[1];
    for(i=0;i<3;i++)
    {
        printf("Enter the Name,Date of birth,Salary:\n");
        scanf("%s%d%d%d%d",&s[i].name,&s[i].date.day,&s[i].date.month,&s[i].date.year,&s[i].salary);
    }
    printf("The Employee Details are:\n");
    for(i=0;i<3;i++)
        printf("Name=%s\n,Date of birth=%d/%d/%d\n,Salary=%d\n",s[i].name,s[i].date.day,s[i].date.month,s[i].date.year,s[i].salary);
}
