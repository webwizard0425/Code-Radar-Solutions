#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
       int k;
    scanf("%d",&k);
    count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    printf("%d",count);
}