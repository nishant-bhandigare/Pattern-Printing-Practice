#include <stdio.h>

int main() {
    
    int row, col, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    for(i=0;i<row;i++){
        for(k=0;k<i;k++){
            printf(" ");
        }
        for(j=0;j<col;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}