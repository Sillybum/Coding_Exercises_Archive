#include <stdio.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;}while(0);

int card_conv(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    
    if(x == 0)
        d[digits++] = dchar[0];
    else
        while (x) {
            d[digits++] = dchar[x % n];
            printf("%d|      %d...%d\n", n, x, x%n);
            printf(" +--------\n");
            x /= n;
        }
    
    for(int i=0; i<(digits/2); i++)
        swap(int, d[i], d[digits-1-i]);
        
    return digits;
}

int main()
{
    puts("Alternate base type\n");
    int retry;
    
    do{
        unsigned no;
        int cd;
        char cno[512];
        
        printf("Enter a positive integer : ");
        scanf("%u", &no);
        
        do{
            printf("Which base?(2-36) : ");
            scanf("%d", &cd);
        } while(cd<2||36<cd);
        
        int dno = card_conv(no, cd, cno);
        
        printf("The number in base %d is ", cd);
        for(int i=0; i<dno; i++)
        {
            printf("%c", cno[i]);
        }
    }while (retry ==0);
}
