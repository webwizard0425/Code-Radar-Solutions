#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(n==1){
        printf("%d",-1);
        return 0;
    }
    int b=INT_MIN;
    int w=0;
    int a=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            a=arr[i];
    }
    }
    int ans=a;
     for(int i=0;i<n;i++){
        if(arr[i]!=ans&&arr[i]>b){
            w=1;
            b=arr[i];
    }
     }
    if(w==1){
    printf("%d",b);
    }if(b==INT_MIN){
        printf("%d"-1);
    }
}
