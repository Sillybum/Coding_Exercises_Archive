#include <stdio.h>

int main()
{
    int counter = 0;
    for(int i=2; i<=1000; i++)
    {
        int j;
        for(j=2; j<i; j++)
        {
            counter++;
            if(i%j == 0){
                //printf("%d isn't prime.\n", i);
                break;
            }
        }
        if(i == j)
                printf("%d is prime.\n", i);
    }
    printf("Execution of devision : %d times", counter);
}
