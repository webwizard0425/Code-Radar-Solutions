#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    int a=0
    for(int i=1;i<n-1;i++){
        int j=i+1;
        if(arr[i-1]<arr[i]&&arr[i]>arr[j]){
            printf("%d", arr[i]);
            break;
        }
    }
    if(a==0)printf("%d",-1);
}