#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}