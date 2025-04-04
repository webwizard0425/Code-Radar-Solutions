#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == ' ') {
            str1[j++] = ch;
        }
    }

    str1[j] = '\0';  // null-terminate the result
    printf("%s", str1);

    return 0;
}
