#include<stdio.h>
struct sparse
{
    int row,col,value;
};
int n,i,j,current;
void main()
{
    struct sparse a[20],b[20];
    printf("Enter the size of the row,col,value\n");
    scanf("%d%d%d",&a[0].row,&a[0].col,&a[0].value);
    printf("Enter the elements of row,col,value\n");
    for(i=1;i<=a[0].value;i++)
    {
        scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].value);
    }
    printf("The input matrix is\n");
    for(i=1;i<=a[0].value;i++)
    {
        printf("%d\t%d\t%d\n",a[i].row,a[i].col,a[i].value);
    }
    transpose(a,b);
    printf("transpose of matrix is \n");
    for(i=0;i<=a[0].value;i++)
    {
        printf("%d\t%d\t%d\n",b[i].row,b[i].col,b[i].value);
    }
}
void transpose(struct sparse a[20],struct sparse b[20])
{
    n=a[0].value;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].value=n;
    if(n>0)
    {
        current=1;
        for(i=0;i<a[0].col;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[j].col==i)
                {
                    b[current].row=a[j].col;
                    b[current].col=a[j].row;
                    b[current].value=a[j].value;
                    current ++;
                }
            }
        }
    }
}


