#include <stdio.h>

int main() {
    
    int n,row, col;
    scanf("%d", &n);
    for(row=0;row<n;row++)
       {
          for(col=0;col<n;col++)
             {
                if(row==0 || row==n-1 || col==0 || col==n-1)
                   {
                      printf("*");
                   }
                else
                   {
                      printf(" ");
                   }
             }
          printf("\n");
       }
        
    return 0;
}