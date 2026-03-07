#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char names[5][50] = {
        "Cengiz",
        "Orkun",
        "Senol",
        "Sergen",
        "Cenk"
    };

    char search[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf("%s", search);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(search, names[i]) == 0)
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