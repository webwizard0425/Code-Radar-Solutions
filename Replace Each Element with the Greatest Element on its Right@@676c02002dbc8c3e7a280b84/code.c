#include<stdio.h>
#include<limits.h>
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
  
    int q=INT_MIN;
    for(int i=0;i<n;i++){
          int a=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>q){
                q=arr[j];
               a=arr[j];
            }
            if(j==n-1){
                ans[i]=a;
            }
        }
       
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
}