// identical number  pattern

#include<stdio.h>

int main()
{
    int j;
    int row = 6;
    for(int i = 0; i< row-1; i++)
    {
        for (j = 0; j < i ; j++)
        {
            printf(" ");
        }
        for(int k = 5; k > i; k--)
        {
            printf("%d",k);
        }
        for (int m = i+1; m <= row-1 ; m++)
        {
            printf("%d",m);
        }
        
        printf("\n");
    }
    return 0;  
}