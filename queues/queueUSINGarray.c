//C program to implement queue using an array
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert();
void delete();
void display();

int queue_arr[MAX];
int rear = -1;
int front = -1;

 int main()
{
    int choice;
    while(1)
    {
        printf("1. Insert an element\t");
        printf("2. Delete an element\t");
        printf("3. Display the queue\t");
        printf("4. Quit\n");
        printf("Enter your choice:");
        scanf("%d", & choice);

        switch(choice)
        {
            case 1 : insert();
                    break;
            case 2 : delete();
                    break;
            case 3 : display();
                break;
            case 4 : exit(1);
            default : printf("wrong choice\n");


        }//end of switch
    }//end of while
}//end main

void insert()
{
    int add_item;
    if(rear == MAX-1)
    printf("Queue overflow!! Isertion not possible !!\n");
    else
    {
        if (front == -1)
            /* if queue is initially empty*/
            front = 0;
        printf("Enter the element to be inserted in queue:");
        scanf("%d", &add_item);
        rear = rear +1;
        queue_arr[rear] = add_item;
    }
}//end of  insert function

void delete()
{
    if (front == -1 || front >rear)
    {
        printf("Queue underflow!! Deletion not possible!\n");
        return;
    }
    else
    {
        printf("Element deleted from queue is: %d \n",queue_arr[front]);
        front = front +1;
    }
}//end of delete()

void display()
{
    int i;
    if (front == -1)
        printf(" Queue is empty!!\n");
    else
    {
        printf("Queue is :\n");
        for(i=front; i<= rear;i++)
            printf("\t%d", queue_arr[i]);
        printf("\n");

    }
}//end of display()

