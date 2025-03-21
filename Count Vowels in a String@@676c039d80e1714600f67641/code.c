#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
        i++;
    }
    printf("%d",count);
}