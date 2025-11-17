//Print sum of 2 numbers
#include<stdio.h>

int sum(int a, int b);

int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b,result;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    result=sum(a,b);
    printf("Sum of a and b is: %d",result);
}