#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

int main()
{
    char infix[SIZE], postfix[SIZE];
    printf("\n The limitation is infix exp must hv single letter");
    printf("\nEnter the valid infix expression: ");
    gets(infix);
    infixToPostfix(infix, postfix);
    printf("\nThe equivalent postfix expression: ");
    puts(postfix);
    return 0;
}

void push(char item)
{
    if(top>=SIZE-1)
        printf("\nStack is full!!");
    else
    {
        top++;
        stack[top]=item;
    }
    return;
}

char pop(void)
{
    char item;
    if(top<0)
    {
        printf("\nStack is empty!!");
        exit(1);
    }
    else
    {
        item = stack[top];
        top--;
        return(item);
    }
}

bool isOperator(char symbol)//bool tells true or false
{
    if(symbol=='^' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-')
       {return true;
       }
    else
        {
        return false;
        }
}

int priority(char symbol)
{
    if(symbol=='^')//exponent operator--highest priority
        {return(3);
        }
    else if(symbol=='*' || symbol=='/')
        {return(2);
        }
    else if(symbol=='+' || symbol=='-')//lowest priority
        {return(1);
        }
    else
        {return(0);
        }
}

void infixToPostfix(char infix[], char postfix[])
{
   char token; //scanned element
   char stackTop;
    int i=0, j=0;

    push('(');
    strcat(infix,")");
    token=infix[i];

    while(infix[i]!='\0')
    {
        if(token=='(')
            {push(token);
            }
        if (isdigit(token) || isalpha(token))
        {
            postfix[j]=token;//add operand to postfix
            j++;
        }
        else if(isOperator(token))
        {
            stackTop=pop();
            while(isOperator(stackTop) && priority(stackTop)>=priority(token))
            {
                postfix[j]=stackTop;
                j++;
                stackTop = pop();
            }
            push(stackTop);
            push(token);
        }
        else if(token==')')//if current symbol is ')'
        {
            stackTop=pop();
            while(stackTop!='(')
            {
                postfix[j]=stackTop;
                j++;
                stackTop=pop();
            }
        }

        i++;
        token=infix[i];
    }
    postfix[j]='\0';
    return;
}

