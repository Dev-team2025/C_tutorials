#include<stdio.h>

void square(int n);
void _square(int *n);

void square(int n){
    n=n*n;
    printf("Square is : %d\n",n);
}

void _square(int *n){
    *n=(*n)*(*n);
    printf("Square is : %d\n",*n);
}

int main(){
    int n=5;
    square(n);
    printf("Number is : %d\n",n);

    _square(&n);
    printf("Number is : %d",n);
}