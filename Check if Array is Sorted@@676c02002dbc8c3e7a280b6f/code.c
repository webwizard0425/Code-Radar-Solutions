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
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            break;
        }else if(i==n-1){
            printf("Sorted");
        }
    }
}