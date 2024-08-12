#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxof(const int a[], int n)
    {
        int max = a[0];
        for (int i=1; i<n; i++)
        {
            if (max<a[i])
                max = a[i];
        }
        return max;
    }
    
int main() 
{
    int number;
    printf("How many people: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    srand(time(NULL));
    for (int i=0;i<number;i++)
    {
        height[i] = 100 + (rand() % 90);
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("The maximum number is %d.\n", maxof(height, number));
    free(height);
    return 0;
}
