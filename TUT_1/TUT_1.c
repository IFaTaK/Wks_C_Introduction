/*
 * First Tutorial in College C Programming Class
 * This program demonstrates dynamic memory allocation, pointer manipulation, 
 * and array handling in C. It takes hours and minutes from two separate arrays,
 * combines them, and adjusts the minutes to properly format them as hours and
 * remaining minutes. It showcases basic memory management with malloc and free.
 */

#include <stdio.h>
#include <stdlib.h>

// Function to display hours and minutes from a combined array
void displayTime(int* start, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d hours and %d minutes.\n", *(start + i * 2), *(start + i * 2 + 1));
    }
}

// Function to convert minutes to hours and minutes
void splitMinutes(int* hours, int* minutes)
{
    *hours = *hours + *minutes / 60;
    *minutes = *minutes % 60;
}

int main()
{
    // Using dynamic allocation: the advantage is that memory can be freed at the end for the rest of the program
    int hoursArray[4] = {1, 5, 10, 8};
    int minutesArray[4] = {111, 85, 15, 38};

    int count = 4;
    int* combinedTime = NULL;
    combinedTime = malloc(2 * count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        combinedTime[2 * i] = hoursArray[i];
        combinedTime[2 * i + 1] = minutesArray[i];
        splitMinutes(combinedTime + 2 * i, combinedTime + 2 * i + 1);
    }
    displayTime(combinedTime, count);
    free(combinedTime);
    return 0;
}
