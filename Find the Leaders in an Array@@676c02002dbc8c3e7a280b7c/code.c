#include<stdio.h>
int main(){
       int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                break;
            }else if(j==n-1){
            printf("%d ",arr[i]);
        }
}
    
    }
    printf("%d ",arr[n-1]);
}