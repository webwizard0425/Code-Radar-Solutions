#include <stdio.h>
#include <stdbool.h>

// Function to check if array is monotonic
bool isMonotonic(int arr[], int n) {
    bool increasing = true, decreasing = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            increasing = false;
        if (arr[i] < arr[i + 1])
            decreasing = false;
    }

    return increasing || decreasing;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isMonotonic(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
