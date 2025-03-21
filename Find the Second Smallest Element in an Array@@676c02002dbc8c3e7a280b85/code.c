#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("d",&arr[i]);
    }
    int a=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<a){
            a=arr[i];
        }
    }
    int z=-1;
    int b=INT_MAX;
     for(int i=0;i<n;i++){
        if(arr[i]<b&&arr[i]!=a){
            b=arr[i];
            z=b;
        }
    }
    printf("%d",z);
}