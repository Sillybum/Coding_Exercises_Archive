#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t = x; x = y; y= t;} while(0);

void ary_reverse(int a[], int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(int, a[i], a[n-1-i]);
        printf("swapped array[%d] and array[%d].\n", i, n-1-i);
    }
}

int main()
{
    int nx;
    
    printf("How many elements in the array? : ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for(int i=0; i<nx; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("Elements order reversed.\n");
    for(int i=0; i<nx;i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    free(x);
    return 0;
    
}
