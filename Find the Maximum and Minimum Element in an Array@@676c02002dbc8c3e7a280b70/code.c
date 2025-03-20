#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int a=INT_MIN;
    int b=INT_MAX;
    if(n==1){
        printf("%d %d",arr[0] ,arr[0]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            a=arr[i];
        }else if(arr[i]<b){
            b=arr[i];
        }
    }
    printf("%d %d", b ,a);
}