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
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            a=arr[i];
    }
    }
    int b=INT_MIN;
    int ans=a;
     for(int i=0;i<n;i++){
        if(arr[i]!=ans&&arr[i]>b){
            b=arr[i];
    }
     }
    printf("%d",b);
    }
