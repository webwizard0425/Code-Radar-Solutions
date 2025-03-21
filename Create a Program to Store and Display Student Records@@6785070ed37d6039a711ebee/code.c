#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float mark;
}s;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s.roll);
        scanf("%s",s.name);
        scanf("%f",&s.mark);
        printf("Roll Number: %d",s.roll);
        printf("Name: %s",s.name);
        printf("Marks: %.2f",s.mark);
    }
}