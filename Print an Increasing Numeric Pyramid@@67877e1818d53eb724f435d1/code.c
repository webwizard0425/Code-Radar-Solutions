#include <stdio.h>

int main(){
    int r;
    scanf("%d",&r);
    for(int i = 1; i<= r; i++){
        for(int j = i; j<=r-1;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");   
    }
}