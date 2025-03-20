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
    int q=1;
    if(n==1 && arr[0]%2==0){
        printf("%d ",arr[0]);
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0&&arr[i]>a){
            a=arr[i];
            q=0;
        }
    }
    if(q==0){
    printf("%d" a);
    }else{
        printf("%d", -1);
    }
}