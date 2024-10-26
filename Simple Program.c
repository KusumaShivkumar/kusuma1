#include<stdio.h>
struct point1;
{
    int x,y;
};
union point2;
{
    int x1,y1;
};
void main()
{
    struct point1 p1,p2,p3;
    union point2 ps1,ps2,ps3;
    printf("Enter 3 variables of structure");
    scanf("%d%d",&p1.x,&p1.y);
    scanf("%d%d",&p2.x,&p2.y);
    scanf("%d%d",&p3.x,&p3.y);
    printf("Enter union variable values\n");
    scanf("%d%d",&ps1.x1,&ps1.y1);
    scanf("%d%d",&ps2.x1,&ps2.y1);
    scanf("%d%d",&ps3.x1,&ps3.y1);
    printf("The 3 variables of structures are");
    printf("%d%d%d%d%d%d%d",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
    printf("The 3 variables of unions are");
    printf("%d%d%d%d%d%d",ps1.x1,ps1.y1,ps2.x2,ps2.y2,ps3.x1,ps3.y1);
}

