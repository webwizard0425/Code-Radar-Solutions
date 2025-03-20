#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<n;k++){
        scanf("%d ", &arr[k]);
    }
    int a=0
    for(int i=1;i<n-1;i++){
        int j=i+1;
        if(arr[i-1]<arr[i]&&arr[i]>arr[j]){
            a=1;
            printf("%d", arr[i]);
            break;
        }
    }
    if(a==0){
        printf("%d",-1);
    }
}