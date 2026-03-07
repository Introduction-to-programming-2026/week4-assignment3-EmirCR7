#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
} Person;

int main(void)
{
    Person people[5] = {
        {"Cengiz", "111111"},
        {"Orkun", "222222"},
        {"Cenk", "333333"},
        {"Senol", "444444"},
        {"Sergen", "555555"}
    };

    char search[50];

    printf("Enter name: ");
    scanf("%s", search);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(search, people[i].name) == 0)
        {
            printf("%s\n", people[i].phone);
            return 0;
        }
    }

    printf("Not found\n");

    return 0;
}