#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    if(x+y>z && x+z>y && z+y>x){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}