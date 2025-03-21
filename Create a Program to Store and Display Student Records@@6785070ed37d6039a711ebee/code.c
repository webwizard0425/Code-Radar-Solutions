#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float mark;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student s[n];  // Declare an array of structures
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf(" %[^\n]", s[i].name); // Reads full name with spaces
        scanf("%f", &s[i].mark);
    }
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].mark);
    }

    return 0;
}
