#include <stdio.h>

void printPyramid(int n, int row)
{
    if (row > n)
        return;

    
    for (int i = 0; i < row; i++)
    {
        printf("#");
    }
    printf("\n");

    
    printPyramid(n, row + 1);
}

int main(void)
{
    int n;

    
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);

    printPyramid(n, 1); 

    return 0;
}