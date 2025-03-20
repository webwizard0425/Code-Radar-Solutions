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
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
            if(arr[i]>k){
                count++;
            }
    }

    
printf("%d",count);
    return 0;
}
