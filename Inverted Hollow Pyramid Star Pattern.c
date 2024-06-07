#include<stdio.h>

int main(){
    int n,i,j,k;
    scanf("%d", &n);
    
    for(i=n-1;i>=0;i--){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        if(i==0){
            printf("*");
        }
        else if(i==n-1){
            for(k=0;k<(2*n-1);k++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<(2*i-1);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}