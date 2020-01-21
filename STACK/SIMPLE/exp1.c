//Implementation of stack using array
//Stack 1

#include<stdio.h>
#define MAX 5      //Stack size
int stack[MAX];
int top = -1;

void push();
void pop();
void display();

void main()
{
    int ch;
    do
    {
        printf("\n***Stack Operations***");
        printf("\n\n1. Push\t2. Pop\t3. Display\t4. Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("\nExit point");
                    break;
            default: printf("\nWrong choice!! Please enter a right choice 1/2/3/4\n");
                    break;
        }
    }while(ch!=4);
}                   //main

void push()
{
    int val;
    if( top == MAX-1)
        printf("\nStack is full! Overflow!");
    else
    {
        printf("\nyou have called push()\n");
        printf("\nEnter the element to be pushed: ");
        scanf("%d", &val);
        top = top+ 1;
        stack[top] = val;
    }
}
void pop()
{
    if(top == -1)
        printf("\nStack is empty! Underflow!");
    else
    {
        printf("you have called pop()\n");
        printf("\nThe popped element is %d\n", stack[top]);
        top = top- 1;
    }
}

void display()
{
    int i;
    if(top== -1)
        printf("\nStack is empty!");
    else
    {
        printf("\nyou have called display()");
        printf("\nThe stack status is \n");
        for(i=top; i>=0; --i)
            printf("\n\t%d", stack[i]);
    }
}
