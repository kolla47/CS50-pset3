/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(values[i] == value)
        {
            k=k+1;
        }
    }
    if(k != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int i, j, min;
    int t;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        t = values[i];
        values[i] = values[min];
        values[min] = t;
    }
    return;
}
