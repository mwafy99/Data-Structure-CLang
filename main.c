#include <stdio.h>

int main(void)
{
    // getting posistive number starting from 1
    int max;
    do {
        printf("Max Entry: ");
        scanf("%d",&max);
    }
    while(max < 1);

    // init new array with max number inputted from user
    int n[max];

    // counter for user input to index
    int size = 0;

    // getting user input and setting index
    while (size < max)
    {
        int user_entry;
        printf("enter a number: ");
        scanf("%d",&user_entry);
        n[size] = user_entry;
        size++;
    }

    // printing numbers
    for (int i = 0 ; i < size ; i++)
    {
        printf("You inputted %i\n",n[i]);
    }
}