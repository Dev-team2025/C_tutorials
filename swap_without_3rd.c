//WAP to swap 2 numbers without using 3rd variable

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping: %d %d",a,b);
}