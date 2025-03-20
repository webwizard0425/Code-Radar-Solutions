#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int m=n;
    int ans[n];
    ans[0]=arr[0];
    for(int i=0;i<n;i++){
        ans[i]=ans[i-1]+arr[i];
    }
     for (int i = 0; i < n; i++) {
        printf("%d ",ans[i]);
    }

    return 0;
}
