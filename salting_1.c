#include <stdio.h>
#include <string.h>

int main(){
    char pass[100];
    char newpass[100];
    char salt[100]="123";
    printf("Enter password: ");
    fgets(pass,100,stdin);
    pass[strcspn(pass,"\n")]='\0';
    
    strcpy(newpass,pass);
    strcat(newpass,salt);
    printf("new password is %s",newpass);
}