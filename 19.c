//WAP in C to print all the letters in English alphabet using a pointer

#include<stdio.h>

void letters(char *ch);

void letters(char *ch){
    for(*ch='A'; *ch<='Z'; (*ch)++){
        printf("%c ",*ch);
    }
}

int main(){
    char ch;
    letters(&ch);
    return 0;
}