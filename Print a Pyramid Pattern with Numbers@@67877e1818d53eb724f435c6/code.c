#include <stdio.h>
int main() {
    int a, k;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j<=a-i ;j++){
            printf(" ");
        }
        for(k = 1; k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}