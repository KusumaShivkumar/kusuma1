#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++);
    {
        if(n%i==0)
        {
            printf("it is not a prime number\n");
            exit(0);
        }
    }
    printf("%d is not a prime number\n",n);
}
