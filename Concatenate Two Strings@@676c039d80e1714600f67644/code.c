#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char str1[100];
    scanf("%[^\n]s",str);
    scanf("%[^\n]s",str1);
    printf("%s",strcat(str,str1));
}