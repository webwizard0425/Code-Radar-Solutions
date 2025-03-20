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
    int q=1;
    if(n==1){
        q=2;
        printf("%d %d",arr[0] ,arr[0]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>a){
            a=arr[i];
        }if(arr[i]<b){
            b=arr[i];
        }
    }
    if(q==1){
    printf("%d %d", b ,a);
    }
}