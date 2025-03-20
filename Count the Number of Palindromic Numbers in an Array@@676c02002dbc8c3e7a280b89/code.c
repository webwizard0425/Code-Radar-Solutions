#include<stdio.h>
#includ<stdbool.h>
bool ispalin(int a){
    if(a>9){
        return true;
    }
    int rev=0;
    while(a<0){
        int r=a%10;
        rev=r*10;
        a=a/10;
    }
    if(rev=a) return true;
    else return false;
}
int main(){
    int n;
    scanf("%d"&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(ispalin(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}