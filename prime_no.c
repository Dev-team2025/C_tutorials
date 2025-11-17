//WAP to check if the number is prime or not

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not a prime\n");
            return 0;
        }
    }

    if (n <= 1)
        printf("Not a prime\n");
    else
        printf("Prime\n");

    return 0;
}
