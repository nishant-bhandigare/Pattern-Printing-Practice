#include <stdio.h>

int main() {
    
    int row, col, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==0 || i==row-1 || j==0 || j==col-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}