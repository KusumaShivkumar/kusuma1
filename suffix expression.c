#include<stdio.h>
#include<math.h>
#include<string.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case'+':return op1+op2;
        case'-':return op1-op2;
        case'*':return op1*op2;
        case'/':return op1/op2;
        case'$':
        case'^':return pow(op1,op2);
        default:return 0;
    }
}
void main()
{
    double stack[20],res,op1,op2;
    int top,i;
    char postfix[20],symbol;
    printf("Enter the postfix expression\n");
    scanf("%s",postfix);
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
            stack[++top]=(symbol-'0');
        else
        {
            op2=stack[top--];
            op1=stack[top--];
            res=compute(symbol,op1,op2);
            stack[++top]=res;
        }
    }
    res=stack[top--];
    printf("The result is:%f\n",res);
}
