#include<stdio.h>
int main(){
    char str[100];
    char str1[100];
    scanf("%s\n",str);
    scanf("%s\n",str1);
    printf("%s",strcat(str,str1));
}