//WAP to print pyramid of stars using while loop
#include <stdio.h>
int main() {
    int i = 1, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    while (i <= n) {
        j = 1;
        while (j <= n - i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}

//WAP to print inverted pyramid of stars using while loop
#include <stdio.h>

int main() {
    int i = 1, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    while (i <= n) {
        j = 1;
        while (j < i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * (n - i + 1) - 1) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
