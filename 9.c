//WAP to convert celsius to fahrenheit
#include<stdio.h>

float cal(float cel);

float cal(float cel){
    float fah=(cel*9/5)+32;
    return fah;
}

int main(){
    float fah=cal(30.00);
    printf("Fahrenheit is %.2f",fah);
    return 0;
}