#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], ans[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxRight = -1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = maxRight;  
        if (arr[i] > maxRight) {
            maxRight = arr[i];  
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
