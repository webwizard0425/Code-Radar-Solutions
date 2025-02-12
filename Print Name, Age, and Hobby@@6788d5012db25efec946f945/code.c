#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    getchar(); 

    char b[100];
    scanf("%s", b); 

    getchar(); 

    char c[100];
    scanf("%s", c); 

    printf("Name: %s\n", b);
    printf("Age: %d\n", a);
    printf("Hobby: %s\n", c);

    return 0;
}
