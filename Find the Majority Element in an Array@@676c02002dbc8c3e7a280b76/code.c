#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=n/2;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                count++;
                if(count>=a){
                    printf("%d",arr[i]);
                    return 0;
                }
            }
        }
        count=0;
    }
    printf("%d",-1);
}