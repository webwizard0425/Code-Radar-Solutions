#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float mark;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student s[n];  // Declare an array of structures
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); // Reads full name with spaces
        
        printf("Marks: ");
        scanf("%f", &s[i].mark);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].mark);
    }

    return 0;
}
