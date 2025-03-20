#include<limits.h>
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void selectionSort(int arr[],int n){
    int a=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a>arr[j]){
                a=arr[j];
            }
        }
        arr[i]=a;
    }

}