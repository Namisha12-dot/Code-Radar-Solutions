#include <stdio.h>
int main(){
    char name[100],hobby[100];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("\nName: %s\nAge: %d\nHobby: %s",name,age,hobby);
}