#include<stdio.h>
int main(){
       int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int ans=0;
   int count=0;
   int a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==arr[j]){
                count++;
            }
        }
        if(ans>count){
            ans=count;
            a=arr[i];
        }
        count=0;
}
printf("%d",a);
}