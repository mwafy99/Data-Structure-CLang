// struct version 3
// Created by mwafy on 2/8/20.
// using linked list for flexible using input

#include <stdio.h>
#include <stdlib.h>

// user input variable
int USER_INPUT;
// user input counter
int SIZE;

// creating a linked-list node
typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // the start of the linked list - pointed to nothing
    node *list = NULL;

    // prompt user for inputs
    while (USER_INPUT != 717)
    {
        // prompt for number
        printf("Number: ");
        scanf("%d", &USER_INPUT);

        // allocate space for number
        node *n = malloc(sizeof(node));

        // check for memory allocating failure [equal to n == NULL ]
        if (!n)
        {
            // quit from program and return 1
            return 1;
        }

        // adding user input to the list
        n->number = USER_INPUT;     // -> like (*n).number
        n->next = NULL;             // -> like (*n).next

        // looping through the linked list
        if (list != NULL)
        {
            // make a tmp pointer to list
            for (node *tmp = list; tmp != NULL; tmp = tmp->next)
            {
                // if the next didn't point to anything - update it
                if (tmp->next == NULL)
                {
                    // if the next address is null assign the new address
                    tmp->next = n;
                    // break after assigning the next address
                    break;
                }
            }
        } else
        {
            list = n;
        }
        SIZE++;
    }

    printf("Your inputs:\n");
    for (node *tmp = list; tmp->number != 717; tmp = tmp->next)
    {
        printf("%d\n", tmp->number);
    }

    // cleaning and freeing memory
    while(list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}

