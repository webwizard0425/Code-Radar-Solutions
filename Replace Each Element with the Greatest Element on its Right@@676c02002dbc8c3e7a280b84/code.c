#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=arr[n-1];
    }
    ans[n-1]=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                ans[i]=arr[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
}