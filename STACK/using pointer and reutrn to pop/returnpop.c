#include<stdio.h>
#include<stdlib.h>


void push(int *top,int stack[]);
int  pop(int *top,int stack[]);
void display(int *top,int stack[]);

int main()
{
int ch,top=-1,stack[5],x;
do{
   printf("\n **STACK OPERATIONS**");
   printf("\n\n1. Push\t2. Pop\t3. Display\t4. Exit");
        printf("\n\nEnter your choice(1-4): ");
        scanf("%d", &ch);
switch(ch)
{
case 1:push(&top,stack);
break;
case 2:x=pop(&top,stack);
printf("\nin main the popped element is %d\n:",x);
break;
case 3:display(&top,stack);
break;
case 4:printf("\n EXIT POINT\n");
break;
default:printf("\n ENTER THE APPROPRIATE CHOICE.....\n");
}

}while(ch!=4);

}

void push(int *top,int stack[])
{int val;
if(*top==4)
printf("\n STACK IS FULL...\n");
else
{
printf("\n ENTER THE VALUE TO BE PUSHED:\n");
scanf("%d",&val);
*top=*top+1;
stack[*top]=val;

}
}
int pop(int *top,int stack[])
{int x;
if(*top==-1)
{
printf("\n STACK IS UNDERFLOW...\n");
exit(0);
}else
{
printf("\n status of the stack:\n");
printf("\n THE POPPED ELEMENT IS %d",stack[*top]);
x=stack[*top];
*top=*top-1;
return(x);
}

}
void display(int *top,int stack[])
{int i;
if(*top==-1)
printf("\n STACK IS empty...\n");
else
{
printf("\n status of the stack:\n");
printf("\n THE ELEMENTS OF THE STACK :");
for(i=*top;i>=0;--i)
 printf("\n\t%d", stack[i]);
}
}

