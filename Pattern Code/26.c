#include<stdio.h>

int main()
{
      int row = 5;
      for(int i = 0; i< row; i++)
      {
        for(int j = 0; j < row; j++)
        {
            if(i == 0 || i == row-1){
            printf("%d",j+1);
            }
            else if(j == 0 || j == row-1){
            printf("%d",j+1);
            }
            else {
                printf(" ");

            }
        }
        printf("\n");
    } 
return 0;
} 