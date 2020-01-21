#include<stdlib.h>
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;
/*Function Prototype*/

void display();
void insert();
void del();
void search();

int main()
{
        int choice;
                printf("\nEnter the size of the array elements:\t");
        scanf("%d",&n);
        printf("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        do{
                printf("\n\n--------Menu-----------\n");

                printf("1.Display\n");
                printf("2.Insert\n");
                printf("3.Delete\n");
                printf("4.Search\n");

                printf("5.Exit\n");
                printf("-----------------------");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {

                        case 1:
                                        display();Merged[i] = a[i];
                                        break;
                        case 2:
                                        insert();
                                        break;

                        case 3:
                                        del();
                                        break;
                        case 4:
                                        search();
                                        break;

                        case 5:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=5);
return 0;
}

void display()  //displaying an array elements
{
        int i;
        printf("\nThe array elements are:\n");
        for(i=0;i<n;i++){
                 printf("%d\t",a[i]);
         }
 }
void insert()   //inserting an element in to an array
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d",&pos);
    printf("\nEnter the element to be inserted :\t");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
}//end of insert()


void del()      //deleting an array element
{
        printf("\nEnter the position of the element to be deleted:\t");
        scanf("%d",&pos);
        val=a[pos];
        for(i=pos;i<n-1;i++)
        {
                a[i]=a[i+1];
        }
        n=n-1;
        printf("\nThe deleted element is =%d",val);
}//end of delete()
void search()   //searching an array element
{
        printf("\nEnter the element to be searched:\t");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
                {
                        printf("\nThe element is present at position %d",i);
                        break;
                }
        }
        if(i==n)
        {
                printf("\nThe search is unsuccessful");
        }
}
