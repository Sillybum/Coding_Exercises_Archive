// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void ary_rcopy(int a[], const int b[], int n)
{
    for(int i=0; i<n; i++)
    {
        a[i] = b[n - 1 - i];
    }
}

int main() {
    int a[5];
    int b[] = {1,2,3,4,5};
    ary_copy(a, b, 5);
    for(int i=0; i<5; i++)
        printf("%d", a[i]);
    return 0;
}
