//Random Password Generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    printf("Enter password length: ");
    scanf("%d", &length);

    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    
    srand(time(0));

    printf("Generated Password: ");

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(characters) - 1);
        printf("%c", characters[index]);
    }

    return 0;
}
