#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='U'){
            str[i]='*';
        }
        else if(str[i]=='o'||str[i]=='O'){
            str[i]=='#';
        }
        i++;
    }
    puts(str);
}