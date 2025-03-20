#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int ans=0;
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
                count++;
            }
        }
        if(count>a){
            a=count;
            ans=arr[i];
        }
        count=0;

    }
    printf("%d",ans);
}