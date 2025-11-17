//WAP to find square root of a number

#include <stdio.h>
#include <math.h>

int main() {
    float  result;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sqrt(num); 

    printf("Square root of %d is %f\n", num, result);

    return 0;
}

