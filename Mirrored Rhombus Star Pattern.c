#include <stdio.h>

int main() {
    
    int n,i,j,k;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        for(k=0;k<n-i;k++){
                printf(" ");
            }
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}