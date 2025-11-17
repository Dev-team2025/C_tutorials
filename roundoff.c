/*take 2 integers and 2 decimal numbers and print sum and difference of the integers as it is 
  and print the sum and diffference of decimal number by roundiing off to one decimal place*/

#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    printf("Enter 2 integers:");
    scanf("%d %d", &a, &b);

    printf("Enter 2 decimal numbers:");
    scanf("%f %f", &x, &y);

    printf("%d, %d\n", a + b, a - b);
    printf("%.2f, %.2f\n", x + y, x - y);

    return 0;
}


