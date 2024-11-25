#include<stdio.h>

int main()
{
      int row = 6;
      for(int i = 0; i< row; i++)
      {
        for(int j = 0; j < row; j++)
        {
            if(i == 0 || i == row-1){
            printf("*");
            }
            else if(j == 0 || j == row-1){
            printf("*");
            }
            else {
                printf(" ");

            }
        }
        printf("\n");
    } 
return 0;
} 