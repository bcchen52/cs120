#include <stdio.h>
int z[] = {3, 4, 15, 10, 0};
int subroutine(int *x)
{
    int largest = x[0];
    while (*x != 0)
    {
        if (*x > largest)
            largest = *x;
        x = x + 1;
    }
    return largest;
}
int main()
{
    printf("largest = %d\n", subroutine(z));
}