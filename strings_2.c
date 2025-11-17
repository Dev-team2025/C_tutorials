//WAP that inputs user's name and print its length
#include <stdio.h>
#include <string.h>

char name[30];
void Fname(){
    fgets(name,30,stdin);
    printf("%s\n",name);
    name[strcspn(name,"\n")]='\0';
}

void length(){
    printf("Lenght is %d",strlen(name));
}

int main(){
    Fname();
    length();
    return 0;
}

//Withput using function
#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    printf("Enter ur name:");
    fgets(name,30,stdin);
    printf("%s\n",name);
    name[strcspn(name,"\n")]='\0';

    int length;
    length=strlen(name);
    printf("%d",length);
    return 0;
}