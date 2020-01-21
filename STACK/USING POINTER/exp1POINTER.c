//Implementation of stack using array
//Stack 1

#include<stdio.h>
//#define MAX 5      //Stack size
//int stack[MAX];
//int top = -1;

void push(int *t, int stack[]);
void pop(int *t, int stack[]);
void display(int *t, int stack[]);

void main()
{
    int ch,top = -1, stack[5];
    do
    {
        printf("\n***Stack Operations***");
        printf("\n\n1. Push\t2. Pop\t3. Display\t4. Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push(&top, stack);
                    break;
            case 2: pop(&top, stack);
                    break;
            case 3: display(&top, stack);
                    break;
            case 4: printf("\nExit point");
                    break;
            default: printf("\nWrong choice!! Please enter a right choice 1/2/3/4\n");
                    break;
        }
    }while(ch!=4);
}                   //main

void push(int *t, int stack[])
{
    int val;
    if( *t == 4)
        printf("\nStack is full! Overflow!");
    else
    {
        printf("\nyou have called push()\n");
        printf("\nEnter the element to be pushed: ");
        scanf("%d", &val);
        *t = *t + 1;
        stack[*t] = val;
    }
}
void pop(int *t, int stack[])
{
    if(*t == -1)
        printf("\nStack is empty! Underflow!");
    else
    {
        printf("you have called pop()\n");
        printf("\nThe popped element is %d\n", stack[*t]);
        *t = *t - 1;
    }
}

void display(int *t, int stack[])
{
    int i;
    if(*t == -1)
        printf("\nStack is empty!");
    else
    {
        printf("\nyou have called display()");
        printf("\nThe stack status is \n");
        for(i=*t; i>=0; --i)
            printf("\n\t%d", stack[i]);
    }
}
