#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{
    int min = a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]<min)
            min = a[i];
    }
    return min;
}

int main()
{
    int number;
    printf("How many people? : ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("Enter %d people's heights.\n", number);
    for (int i=0; i<number; i++)
    {
        printf("person %d's height : ", i);
        scanf("%d", &height[i]);
    }
    printf("The tiniest person is %dcm tall.\n", minof(height, number));
    free(height);
    return 0;
}
