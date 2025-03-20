#include<stdio.h>
int sum(int a){
    int ans=0;
    while(a>0){
        int r=a%10;
        ans+=r;
        a=a/10;
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=sum(arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}