#include <stdio.h>

int main()
{
        int i,j,k,l;
    for(i = 0; i< 5 ; i++)
    {
        for (int m = i; m<5 ; m++)
        {
            printf("%d",m+1);
        }
        for (k = 0; k<i; k++)
        {
            printf(" ");
        }
        for (l = 0; l<i; l++)
        {
            printf(" ");
        }
        for(j =5; j>i ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

