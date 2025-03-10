#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x%4==0){
        if(x==1900){
            printf("Not a Leap Year");
        }
        else{
            printf("Leap Year");
        }
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}