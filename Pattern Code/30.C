#include<stdio.h>

int main()
{
      int row = 6;
      for(int i = 0; i< row-1; i++)
      {
        for (int j = 0; j < i ; j++)
        {
            printf(" ");
        }
        for(int k = 5; k > i; k--)
        {
            printf("%c",'F'-k);
        }
        for (int m = i+2; m<row  ; m++)
        {
            printf("%c",'F'-m);
        }
        printf("\n");
      }
    return 0;  
}