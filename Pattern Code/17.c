#include <stdio.h>

int main()
{
    
    for(int i = 0; i< 5 ; i++)
    {
        for (int m = i; m<5 ; m++)
        {
            printf("%d",m+1);
        }
        for (int k = 0; k<i; k++)
        {
            printf(" ");
        }
        printf("\n");
    }
return 0;
}