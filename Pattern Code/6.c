#include<stdio.h>

int main()
{
      int row = 6;
      for(int i = 0; i< row; i++)
      {
        for(int j = 1; j < row-i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k<=i; k++){
            printf("%c",'A'+k);
        }
        printf("\n");
      }
    return 0;  
}