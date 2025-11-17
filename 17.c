//WAF to calculate the sum, product and average of 2 numbers in the main function

//CALL BY VALUE
#include <stdio.h>

int math(int a, int b, int sum, int prod, int avg);

int math(int a, int b, int sum, int prod, int avg){
    sum=a+b;
    prod=a*b;
    avg=(a+b)/2;
    printf("In defination : sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return sum,prod,avg;
}

int main(){
    int a=6;
    int b=4;
    int sum, prod,avg;
    math(a,b,sum,prod,avg);
    printf("In main : sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}

//CAL BY REFERENCE
#include<stdio.h>

int math(int a, int b, int *sum, int *prod, int *avg);

int math(int a, int b, int *sum, int *prod, int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
    printf("In defination : sum = %d, prod = %d, avg = %d\n", *sum, *prod, *avg);
    return *sum,*prod,*avg;
}

int main(){
    int a=6;
    int b=4;
    int sum, prod,avg;
    math(a,b,&sum,&prod,&avg);
    printf("In main : sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}