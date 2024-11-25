#include<stdio.h>
int main(){
int q,w,e,y,s,t;
    for(q = 1; q<= 5 ; q++)
    {
        for (e = 5; e > 5-q ; e--)
        {
            printf("*");
        }
        for (y = 5; y > q ; y--)
        {
            printf(" ");
        }
         for (s = 5; s >0; s--)
        {
            if ( s > q)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
     return 0;
}

