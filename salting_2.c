//Salting - adding salt(hash) to created password
#include<stdio.h>
#include<string.h>

void salting(char password[]);
void salting(char password[]){
    char newpass[40];
    char salt[]="123";

    strcpy(newpass,password);
    strcat(newpass,salt);
    printf("%s",newpass);

}
int main(){
    char password[20];
    scanf("%s",password);
    salting(password);
}