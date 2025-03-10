#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++) {
        char char1 = 'A';
        for(int j = a;j >=i ;j--){
            printf("%c ",char1);
            char1++;
        }
        printf("\n");
    }
    return 0;
}