#include <stdio.h>

int main() {
    
    int n,i,j,k;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        for(k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(j=0;j<(2*i+1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(k=0;k<n-i;k++){
            printf(" ");
        }
        for(j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}