#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i =1; i<= a; i++){
        int x = 1;
        for(int j=1;j<=i;j++){
            if(!(i%2==0)){
                if(x==1){
                    printf("%d ",x);
                    x--;
                }
                else{
                    printf("0 ");
                    x++;
                }
            }
            else{
                if(x==1){
                    printf("0 ");
                    x--;
                }
                else{
                    printf("1 ");
                    x++;
                }
            }  
        }
        printf("\n");
    }
}