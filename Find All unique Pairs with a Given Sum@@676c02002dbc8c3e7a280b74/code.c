#include<stdio.h>
int main(){
       int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    int a=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a!=1){
            if(arr[i]+arr[j]==k){
                printf("%d %d\n",arr[i] ,arr[j]);
                a=1;
            }
        }
        }
    }
}