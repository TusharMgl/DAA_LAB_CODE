#include<stdio.h>

int main()
{
      int row = 5;
      for(int i = 0; i< row; i++)
      {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = i; k<5; k++){
            printf("%d",k+1);
        }
        printf("\n");
      }
    return 0;  
}