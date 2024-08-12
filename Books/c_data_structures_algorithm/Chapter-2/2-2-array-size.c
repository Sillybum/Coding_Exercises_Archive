#include <stdio.h>

int main() 
{
    int a[5] = {1,2,3,4,5};
    int na = sizeof(a) / sizeof(a[0]);  //Calculate the number of the elements
    printf("The number of the elements in the array 'a' : %d.\n", na);
    
    for(int i=0; i<na; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
