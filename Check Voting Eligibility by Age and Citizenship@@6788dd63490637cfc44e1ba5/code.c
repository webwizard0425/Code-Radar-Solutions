#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d",&x,&y);
    if(y==0 || x<18){
        printf("Not Eligible");
    }
    else{
        printf("Eligible");
    }
}