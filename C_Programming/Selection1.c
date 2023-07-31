#include <stdio.h>

int main()
{
    int A = 0;
    printf("Enter a number: ");
    scanf("%d", &A);

    if ((A % 2) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}