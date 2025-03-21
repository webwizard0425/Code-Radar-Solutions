#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf(" %[^\n]", str); // Reads a full line, handling leading spaces

    int i = 0, count = 0;
    int inWord = 0; // Flag to check if we are inside a word

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (inWord == 0) { // Starting a new word
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0; // Reset flag when encountering a space
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}
