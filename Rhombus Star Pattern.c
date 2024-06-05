#include <stdio.h>

int main() {
    
    int n,row, col,i;
    scanf("%d", &n);
    
    for(row=0;row<n;row++){
        for(i=0;i<row;i++){
                printf(" ");
            }
        for(col=0;col<n;col++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}