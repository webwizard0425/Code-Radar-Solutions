#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            if(arr[i]==arr[j]&&i!=j){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;

}