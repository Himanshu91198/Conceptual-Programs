#include <stdio.h>
#include <fcntl.h>
// #include <unistd.h>
#include <stdlib.h>
int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "Hello world!";

    printf("Enter file name that you want to open: \n");
    scanf("%s", Name);

    FD = open(Name, O_RDWR);
    if (FD == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened\n");
    }
    write(FD, Data, 19);
    return 0;
}
