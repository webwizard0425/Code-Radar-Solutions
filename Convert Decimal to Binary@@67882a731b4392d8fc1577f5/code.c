#include <stdio.h>

void printBinary(int x) {
    if (x > 1) {
        printBinary(x / 2);
    }
    printf("%d", x % 2);
}

int main() {
    int x;
    scanf("%d", &x);
    printBinary(x);
    return 0;
}