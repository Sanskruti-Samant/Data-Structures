/* C Program to Merge Two Arrays using For Loop */
#include<stdio.h>

int main()
{
 	int aSize, bSize, i, j;
	int a[10], b[10], Merged[20];

 	printf("\n Please Enter the First Array Size  :  ");
 	scanf("%d", &aSize);

 	printf("\nPlease Enter the First Array Elements :  ");
 	for(i = 0; i < aSize; i++)
  	{
      	scanf("%d", &a[i]);
      	Merged[i] = a[i];
  	}
  	j=i;
  	printf("\n Please Enter the Second Array Size  :  ");
 	scanf("%d", &bSize);

 	printf("\nPlease Enter the Second Array Elements  :  ");
 	for(i = 0; i < bSize; i++)
  	{
      	scanf("%d", &b[i]);
      	Merged[j] = b[i];
      	j++;
  	}





 	printf("\n new array is:\n");
 	for(i = 0; i < j; i++)
  	{
    	printf(" %d \t ",Merged[i]);
  	}

  	return 0;
}
