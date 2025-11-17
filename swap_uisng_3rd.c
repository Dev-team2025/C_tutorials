//WAP to swap 2 numbers using 3rd variable

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b); 
    c = a;
    a = b;
    b = c;
    printf("After swapping: ");
    printf("%d %d", a, b); 
    return 0;
}
