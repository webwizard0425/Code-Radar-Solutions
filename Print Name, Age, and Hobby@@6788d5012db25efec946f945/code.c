#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    getchar(); 

    char b[20];
    scanf("s", b); 

    getchar(); 

    char c[40];
    scanf("s", c); 

    printf("Name: %s\n", b);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", c);

    return 0;
}
