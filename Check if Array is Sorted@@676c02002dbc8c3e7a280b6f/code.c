#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       // int a;
       scanf("%d",&arr[i]);
       //arr[i]=scanf("%d",&a);
    }
      int isSorted = 1; 
    for (int i = 0; i < n - 1; i++) { 
        if (arr[i] > arr[i + 1]) { 
            isSorted = 0;
            break;
        }
    }

    // Printing the result
    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    }
