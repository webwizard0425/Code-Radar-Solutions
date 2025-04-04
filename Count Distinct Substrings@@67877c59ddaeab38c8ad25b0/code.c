#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isDuplicate(char substrs[][100], int count, char* temp) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrs[i], temp) == 0)
            return true;
    }
    return false;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    int len = strlen(str);
    char substrs[10000][100]; // Store substrings
    int count = 0;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            char temp[100] = {0};
            int k = 0;
            for (int x = i; x <= j; x++) {
                temp[k++] = str[x];
            }
            temp[k] = '\0';

            if (!isDuplicate(substrs, count, temp)) {
                strcpy(substrs[count++], temp);
            }
        }
    }

    printf("%d", count);
    return 0;
}
