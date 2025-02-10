#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    getchar(); // Consume the newline character

    char b[20];
    scanf("%19s", b); // Leave space for the null terminator

    getchar(); // Consume the newline character

    char c[40];
    scanf("%39s", c); // Leave space for the null terminator

    printf("Name: %s\n", b);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", c);

    return 0;
}
