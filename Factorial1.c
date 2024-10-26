#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*(fact(n-1));
}
void main()
{
    int n;
    printf("enter the number \n");
           scanf("%d",&n);
           printf("factorial%d!=%d\n",n,fact(n));
}

