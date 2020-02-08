// struct version 2
// Created by mwafy on 2/8/20.
// resizing array based on user inputs using re-alloc function

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MAX;    // max elements number
int SIZE;   // size of array allocated by user
int USER_INPUT;     // user input
int main(void)
{
    // creating pointer to NULL address
    int *list = NULL;

    // initializing MAX and SIZE
    MAX = 0;
    SIZE = 0;
    printf("Enter your numbers\n717 to break\n\n");

    // asking for inputs until getting 01
    while (USER_INPUT != 717)
    {
        // getting user input
        printf("Number: ");
        scanf("%d", &USER_INPUT);

        // reallocating more memory as per this condition - always true until break
        if (SIZE == MAX)
        {
            list = realloc(list, sizeof(int) * (SIZE + 1));
            MAX++;
        }

        // indexing and getting value
        list[SIZE] = USER_INPUT;

        // increasing index by 1
        SIZE++;
    }

    printf("Your inputs:\n");
    // printing all inputs except the last breaking number (717)
    for (int i = 0 ; i < SIZE-1 ; i++)
    {
        printf("%i\n",list[i]);
    }

    // cleaning and freeing memory
    free(list);
    return 0;
}
