#include <stdio.h>

int main()
{
        int i,j,k;
    for(i = 0; i< 5 ; i++)
    {
        for (int m = 0; m<=i; m++)
        {
            printf("%c",'A'+m);
        }
        
        printf("\n");
    }
return 0;
}