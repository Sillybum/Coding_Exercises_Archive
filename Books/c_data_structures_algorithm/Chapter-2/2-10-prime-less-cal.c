#include <stdio.h>

//It takes less calculation than 2-9 version.
int main()
{
    int prime[500];
    int ptr = 0;
    unsigned long counter = 0;
    prime[ptr] = 2;
    ptr++;
    for(int n=3; n<=1000; n+=2)
    {
        int i;
        for(i=1; i<ptr; i++)
        {
            counter++;
            if(n % prime[i] == 0)
                break;
        }
        if(ptr == i)
        {
            prime[ptr] = n;
            ptr++;
        }
        
    }
    for(int i=0; i<ptr; i++)
            printf("%d\n", prime[i]);
        printf("Excution : %d times", counter);
}
