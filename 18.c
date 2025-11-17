//WAP in C to find the maximum number between two numbers using a pointer

#include<stdio.h>

int number(int *a, int *b);

int number(int *a, int *b){
    if(*a>*b){
        return *a;
    }
    else{
        return *b;
    }
}

int main(){
    int a=9, b=3;
    int max=number(&a,&b);
    printf("Greater number is %d\n",max);
    return 0;
}