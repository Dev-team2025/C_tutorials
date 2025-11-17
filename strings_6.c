//Count the number of letters in the string
#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    int count[256]={0};
    printf("Enter string: ");
    fgets(word, 100, stdin);
    word[strcspn(word,"\n")]='\0';

    for(int i=0; word[i]!='\0'; i++){
        char letter=word[i];
        count[letter]=count[letter]+1;
    }
    for(int i=0; word[i]!='\0'; i++){
        char letter=word[i];
        if(letter[count]>0){
            printf("%c-%d\n",letter,count[letter]);
            count[letter]=0;
        }
    }
}