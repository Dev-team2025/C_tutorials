//WAP to calculate factorial of n

#include<stdio.h>

int fact(int n);

int fact(int n){
    if(n==1){
        return 1;
    }
    int total=fact(n-1)*n;
    return total;
}

int main(){
    int total= fact(5);
    printf("Factorial is : %d",total);
    return 0;
}