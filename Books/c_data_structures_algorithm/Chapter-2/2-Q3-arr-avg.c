#include <stdio.h>
#include <stdlib.h>

int avgof(const int a[], int n)
{
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum/n;
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
    printf("The average of people's height is %d.\n", avgof(height, number));
    free(height);
    return 0;
}
