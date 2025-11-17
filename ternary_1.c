//WAP using ternary operator to check which number is greater among 2

#include<stdio.h>
int main(){
     int a,b;
     printf("Enter 2 numbers:");
     scanf("%d %d",&a,&b);

     (a>b)?printf("a is greater than b"):printf("b is greater than a");
}

//WAP using ternary operator to check which number is greater among 3

#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum is: %d\n", max);
    return 0;
}
