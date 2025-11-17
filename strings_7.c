//Convert all the uppercase to lowercase and vice versa
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[100];
    // char new[100];
    printf("Enter string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")]='\0';

    for(int i=0; string[i]!='\0'; i++){
        if(islower(string[i])){
           string[i]= toupper(string[i]);
        }
        else if(isupper(string[i])){
            string[i]= tolower(string[i]);
        }
    }
    printf("%s",string);
}