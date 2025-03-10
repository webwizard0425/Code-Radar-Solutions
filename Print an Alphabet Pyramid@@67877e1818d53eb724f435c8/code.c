#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        char b = 'A';
        int k = 1;
        while(k<= i){
            printf("%c ",b);
            b++;
            k++;
        }
        printf("\n");
    }
    return 0;
}