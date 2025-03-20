#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int q=0;
    if(n==1){
        q=1;
        printf("%d",-1);
    }
    int w=0;
    if(q=0){
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
            w=1;
            b=arr[i];
    }
     }
    }
    if(w=1){
    printf("%d",b);
    }else{
        printf("%d"-1);
    }
}
