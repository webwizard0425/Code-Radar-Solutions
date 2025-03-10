#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        int j=1;
        char ch = 'A';
        while (j<=i){
            printf("%c ",ch);
            ch++;
            j++;
        }
        printf("\n");
    }
    return 0;
}