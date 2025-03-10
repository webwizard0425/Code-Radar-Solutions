#include <stdio.h>

int main() {
    int a, b;
    char z;
    scanf("%d %d %c",&a,&b,&z);
    switch (z){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("error\n");
            }
            break;  
        default:
            printf("Invalid Input"); 
    }
}