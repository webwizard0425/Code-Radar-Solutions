#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
     scanf("%d",&a);
      for(int i=0;i<n;i++){
        if(a==arr[i]){
            printf("%d",i);
            return 0;
        }
    }
     printf("%d",-1);
}