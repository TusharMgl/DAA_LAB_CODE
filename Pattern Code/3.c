
#include<stdio.h>

int main()
{
      int row = 6;
     
      for(int i = 0; i< row; i++)
      {
        for(int j = 0; j < row; j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
      }
    return 0;  
}