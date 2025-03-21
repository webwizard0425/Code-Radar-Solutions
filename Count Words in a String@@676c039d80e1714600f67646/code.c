#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
      int i=0;
    while(str[i]==' '){
        i++;
    }
    int count=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }
    printf("%d",count+1);
}