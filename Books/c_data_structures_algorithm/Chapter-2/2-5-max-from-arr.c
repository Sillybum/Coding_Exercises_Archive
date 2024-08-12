#include <stdio.h>
#include <stdlib.h>

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
    printf("Number of people: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("Enter the height of each person.\n");
    for (int i=0; i<number;i++)
    {
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("The maximum number is %d.", maxof(height, number));
    free(height);
}
