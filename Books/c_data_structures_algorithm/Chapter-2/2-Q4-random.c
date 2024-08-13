#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n)
{
    int max = a[0];
    for(int i=1; i<n; i++)
    {
        if (max<a[i])
            max = a[i];
    }
    return max;
}

int main()
{
    srand(time(NULL));
    int number = 5 + (rand() % 16);
    printf("There are %d people.\n", number);
    int *height = calloc(number, sizeof(int));
    for (int i=0; i<number; i++)
    {
        height[i] = 100 + (rand() % 90);
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("The tallest person is %dcm tall.", maxof(height, number));
    free(height);
    return 0;
}
