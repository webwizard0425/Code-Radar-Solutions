#include <stdio.h>

int main(){
    int n,x=1,sum=0;
    scanf("%d",&n);
    while(x<=n){
        sum += x;
        x++;
    }
    printf("%d",sum);
}