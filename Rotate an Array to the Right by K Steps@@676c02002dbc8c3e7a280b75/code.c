#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    k=k%n;
    
    int a[n];
    int j=0;
    for(int i=n-k;i<n;i++){
        a[j]=arr[i];
        j++;
    }
    for(int i=0;i<n-k;i++){
        a[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}