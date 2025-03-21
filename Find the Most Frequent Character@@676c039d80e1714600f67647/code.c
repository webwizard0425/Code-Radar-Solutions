#include <stdio.h>

int main() {
    char str[100];
    scanf(" %[^\n]", str); // Read the input string

    int freq[256] = {0}; // Array to store frequency of each character
    int maxFreq = 0;
    char maxChar = '\0';

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++; // Store frequency in ASCII index

        // Update max frequency and character
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("%c\n", maxChar);
    return 0;
}
