#include <stdio.h>

int main(void)
{
    int numbers[8] = {3, 7, 1, 9, 5, 12, 8, 4}; 
    int target;
    int found = 0; 

    printf("Enter number to search: ");
    scanf("%d", &target);

    // Linear search
    for (int i = 0; i < 8; i++)
    {
        if (numbers[i] == target)
        {
            found = 1;
            break; 
        }
    }

    if (found)
        printf("Found\n");
    else
        printf("Not found\n");

    return 0;
}