#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    int i=0;
    int e=l-1;
    while(i<e){
        if(str[i]!=str[e]){
            printf("No");
            return 0;
        }
        i++;
        e--;
    }
    printf("Yes");
}