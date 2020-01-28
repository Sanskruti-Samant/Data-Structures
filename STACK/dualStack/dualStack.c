#include<stdio.h>
#include<stdlib.h>
#define max 5

void push(int [], int * );
int pop(int [], int *);
void display(int [], int *);
int isFull(int *);
int isEmpty(int *);
void peak(int [], int *);

int main(){
    int *st;
    int *top;
    typedef struct{
    int stack[max];
    int top;
    } stack;

    stack stackA, stackB;
    stackA.top=-1;
    stackB.top=-1;
    int dr;
    int ch, sch;

    printf("\nStack operations\n");
    printf("\nEnter the stack choice 1 or 2:");
    scanf("%d",&sch);
    if(sch==1){
        st=stackA.stack;
	top=&stackA.top;
    }
    else{
        st=stackB.stack;
	top=&stackB.top;
    }
    while(1){
    printf("\nEnter the choice\n 1:Push 2:Pop 3:Display 4:Peak 5:Exit\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:
            push(st, top);
            break;
    case 2: dr=pop(st, top);
            printf("\nThe popped value is %d\n",dr);
            break;
    case 3:
            display(st, top);
            break;
    case 4:
            peak(st, top);
            break;
    case 5: exit(0);
    default: printf("\nEnter proper choice\n");
        }
    }
}

void push(int stack[], int *top){
int val;
if(isFull(top)){
    printf("\nStack overflow\n");
    return;
}
    printf("\nEnter the value to be pushed: ");
    scanf("%d",&val);

    *top+=1;
    stack[*top]=val;
}


int pop(int stack[], int *top){
if(isEmpty(top)){
    printf("\nStack underflow\n");
    return;
}
*top-=1;
return stack[*top+1];
}



void display(int stack[], int *top){
    int i;
if(!isEmpty(top)){
printf("\nStack status:\n");
for(i=*top; i>0; --i)
    printf("%d\n", stack[i]);
}
}


int isFull(int *top){
    return (*top==max-1)?1:0;
}
 int isEmpty(int *top){
    return (*top==-1)?1:0;
 }
 void peak(int stack[], int *top){
 printf("\nThe peak value of stack is %d\n", stack[*top]);
 }
