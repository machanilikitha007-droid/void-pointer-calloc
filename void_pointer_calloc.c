#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 5;

    void *ptr = calloc(count, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int *numbers = (int *)ptr;

    printf("Initial values:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}
