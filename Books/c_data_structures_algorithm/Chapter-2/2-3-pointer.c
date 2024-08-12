#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *x = calloc(1, sizeof(int));
    if(x == NULL)
    {
        puts("Failed to allocate the memory");
    }
    else 
    {
        *x = 34;
        printf("*x = %d\n", *x);
        free(x);
    }
    return 0;
}
