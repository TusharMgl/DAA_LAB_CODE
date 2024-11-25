#include <stdio.h>

int main()
{
        int i,j,k,l;
    for(i = 0; i< 5 ; i++)
    {
        for (int m = i; m<5 ; m++)
        {
            printf("*");
        }
        for (k = 0; k<i; k++)
        {
            printf(" ");
        }
    printf("\n");
    }
return 0;
}