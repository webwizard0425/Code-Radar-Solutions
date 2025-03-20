#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int st=0;
    int ed=n-1;
    while(st<ed){
        if(arr[ed]!=arr[st]){
            printf("NO");
            return 0;
        }
        st++;
        ed--;
    }
     printf("YES");
}