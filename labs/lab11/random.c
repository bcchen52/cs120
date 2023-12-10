// CS120 Lab-11 Brian Chen
#include <stdio.h>
#include <stdlib.h>

#define ARRAYSIZE 100000
int x[ARRAYSIZE];

int compare(const void *a, const void *b)
{
    if(*(int *)a < *(int *)b)
    {
        return -1;
    }

    if(*(int *)a > *(int *)b)
    {
        return 1;
    }

    return 0;
}

void bubblesort(int *data, int length)
{
    int i, j;
    int temp;

    for(i = 0; i < length; ++i)
    {
        for(j = i + 1; j < length; ++j)
        {
            if (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void print_array(int *data, int length)
{
    for(int i = 0; i < length; ++i)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main()
{
    for(int i = 0; i < ARRAYSIZE; ++i)
    {
        x[i] = random();
    }
  
    bubblesort(x, ARRAYSIZE);
    print_array(x, 20);
}

