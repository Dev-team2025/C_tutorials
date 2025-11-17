//Check if the entered character is present in string or not
#include <stdio.h>
#include <string.h>

int check(char str[100],char ch);

int check(char str[100],char ch){
    for(int i=0; str[i]!='\0';i++){
        if(str[i]==ch){
           return 1;
        }
    }
    return 0;
}

int main(){
    char str[100],ch;
    printf("Enter string: ");
    fgets(str,100,stdin);

    printf("Enter character: ");
    scanf("%c",&ch);

    if(check(str,ch)){
        printf("Present");
    }
    else{
        printf("Not present");
    }
}
