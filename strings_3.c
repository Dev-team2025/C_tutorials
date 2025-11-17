//Take string input from user using %c
#include <stdio.h>
#include <string.h>

int main() {
  char word[100];
  char letter;
  int i=0;

  while(letter!='\n'){
    scanf("%c",&letter);
    word[i]=letter;
    i++;
  }
  word[i]='\0';
  puts(word);
  return 0;
}
