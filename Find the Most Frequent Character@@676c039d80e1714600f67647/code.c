#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int count=0;
    int ans=0;
    int i=0;
    char q;
    while(str[i]!='\0'){
        for(int j=0;j!='\0';j++){
            if(i!=j&&str[i]==str[j]){
                count++;
            }
        }
        if(count>ans){
            ans=count;
            q=str[i];
        }
        count=0;
        i++;
    }
    printf("%c",q);
}