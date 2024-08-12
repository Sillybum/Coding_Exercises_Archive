#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a[5] ={1,2,3,4,5};
    int *p = a;
    printf("%d, %d, %d, %d", a[0], p[1], *p, *(p+1));
    return 0;
}
