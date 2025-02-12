#include<stdio.h>
void reverse(int arr[],int s,int e,int n){
    int i=s;
    int j=e-1;
    while(i<j){
        int tep=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(k>n){
        k=n/k;
    }
    reverse(arr,0,k+1,n);
    reverse(arr,k+1,n,n);
    reverse(arr,0,n,n);

}