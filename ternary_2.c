//WAP to check whether the entered character is vowel or consonant

#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);

    ((letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U')||
    (letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u'))?
    printf("Vowels"): printf("Consonants");

    return 0;
}
