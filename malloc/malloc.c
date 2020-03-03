#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(15*sizeof(*ptr));
    if (ptr != NULL)
    {
        *(ptr +5)=480;
        printf("value of  integer %d",*(ptr+5));
    }
    free(ptr);

}
/*even if we make the value of *(ptr +5)as *(ptr +500), it works inspite of size as 15 in the malloc func.
This is coz malloc concentrates on size of answer & not where the pointer is pointing.
It may point to 500th position but the answer it generates must be under the limits of the malloc size assigned to it*/
