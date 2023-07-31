#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elements \n");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));

    printf("Please enter elements");

    for (iCnt = 0; iCnt < size; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Entered elements are");

    for (iCnt = 0; iCnt < size; iCnt++)
    {
        printf("%d", p[iCnt]);
    }

    free(p);

    return 0;
}