#include <stdio.h>

int findPeakElement(int arr[], int n) {
    if (n == 1) 
        return arr[0];  // If there's only one element, it's the peak

    if (arr[0] > arr[1]) 
        return arr[0];  // First element is a peak

    if (arr[n - 1] > arr[n - 2]) 
        return arr[n - 1];  // Last element is a peak

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // Found a peak
        }
    }

    return -1; // No peak found (this should theoretically never happen)
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findPeakElement(arr, n);
    printf("%d\n", peak);

    return 0;
}
