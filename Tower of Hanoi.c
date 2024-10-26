#include<stdio.h>
#include<math.h>
void tower(int n,int source,int temp,int destination)
{
    if(n==0)
        return;
    tower(n-1,source,destination,temp);
    printf("\n Move disk %d from %c to %c",n,source,destination);
    tower(n-1,temp,source,destination);
}
void main()
{
    int n;
    printf("\n Enter the number of disks:\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n \n Total no of moves are:%d\n",(int)pow(2,n)-1);
}
