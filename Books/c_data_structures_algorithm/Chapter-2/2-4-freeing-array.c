#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int na;
    printf("The number of the elements: ");
    scanf("%d", &na);
    int *a = calloc(na, sizeof(int));
    
    if(a == NULL)
    {
        puts("Failed to allocate");
    }
    else
    {
        printf("Enter %d integer numbers.\n", na);
        for(int i=0; i<na; i++)
        {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }
        printf("The result is as followed.\n");
        for (int i=0; i<na; i++)
        {
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }
    
    return 0;
}
