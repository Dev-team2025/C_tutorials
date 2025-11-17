//WAP to check the entered letter is uppercase or lowercase

#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);
    
    //ASCII values (American Standard Code for Information Interchange)
    if(letter>='A' && letter<='Z'){
        printf("Uppercase letter\n");
    }
    else if(letter>='a' && letter<='z'){
        printf("Lowercase letter\n");
    }
    else{
        printf("Entered invalid letter\n");
    }
}