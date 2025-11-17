//Print the string in reverse
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char reverse[100];
    printf("Enter string: ");
    fgets(string, 100, stdin);
    string[strcspn(string,"\n")]='\0';
    int length= strlen(string);

    int j=0;
    for(int i= length-1; i>=0; i--){
        reverse[j] = string[i];
        j++;
    }
    reverse[j]='\0';
    printf("%s",reverse);
    
    return 0;
}
