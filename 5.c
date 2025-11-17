//WAP to print final price of the product if 18% GST is added to the actual product price
#include<stdio.h>

void price(float value);

void price(float value){
    value =value+(0.18*value);
    printf("Final price is : %.2f",value);
} 

int main(){
    float value;
    printf("Enter the product value: ");
    scanf("%f",&value);

    price(value);
    return 0;
}

