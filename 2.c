//WAP to print NAMASTE if user is Indian and BONJOUR if the user is French and invalid for others
#include<stdio.h>
void namaste();
void bonjour();

void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}

int main(){
    printf("Enter nationality: ");
    char letter;
    scanf("%c",&letter);

    if(letter=='i'){
         namaste();
    }
    else if(letter=='f'){
         bonjour();
    }
    else{
        printf("Invalid. Enter i or f");
    }
}
