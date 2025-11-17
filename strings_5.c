//Count numer of vowels and consonants in the string
#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    int vowels=0, consonants=0;
    printf("Enter string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")]='\0';

    for(int i=0; string[i]!='\0'; i++){
        char letter=string[i];
        if((letter>='A'&& letter<='Z') || (letter>='a'&& letter<='z')){
            if(letter=='a'|| letter=='e'|| letter=='i'|| letter=='o'||letter=='u'||
               letter=='A'|| letter=='E'|| letter=='I'|| letter=='O'|| letter=='U'){
                vowels+=1;
               }
            else{
                consonants+=1;
            }
        }
    }
    printf("vowels = %d\nconsonants = %d",vowels,consonants);
}