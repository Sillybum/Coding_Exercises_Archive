#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t=x; x=y; y=t; } while(0)

void reverse_ary(int a[], int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(int, a[i], a[n-1-i]);
    }
}

int main() 
{
    int nx;
    
    printf("Number of elements: ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for(int i=0; i<nx; i++)
    {
        printf("x[%d]: ",i);
        scanf("%d", &x[i]);
    }
    reverse_ary(x, nx);
    printf("The array is now reversed.\n");
    for(int i=0;i<nx;i++)
        printf("x[%d] = %d\n",i, x[i]);
    free(x);
    
}
