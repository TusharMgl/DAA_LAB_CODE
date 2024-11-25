#include<stdio.h>

int main()
{
      int row = 6;
      for(int i = 0; i< row; i++)
      {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = i; k<row; k++){
            printf("%c",'A'+k);
        }
        printf("\n");
      }
    return 0;  
}