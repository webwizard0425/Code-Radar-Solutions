#include<stdio.h>
#include <stdbool.h>
#include <math.h>
bool prime(int a){
    if(a==2){
        return true;
    }
    if(a==1||a==0) return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(prime(arr[i])) count++;
    }
    printf("%d",count);
}