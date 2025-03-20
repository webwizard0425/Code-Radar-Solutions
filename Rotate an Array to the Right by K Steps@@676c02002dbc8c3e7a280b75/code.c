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
    for(int i=k;i<n;i++){
        a[j]=arr[i];
        j++;
    }
    for(int i=0;i<k;i++){
        a[j++]=arr[i];
    }
    for(int i=0;i<k;i++){
        printf("%d",a[i]);
    }
}