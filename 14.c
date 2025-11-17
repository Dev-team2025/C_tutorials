//Print nth term of Fibonacci sequence
#include <stdio.h>

int fib(int n);

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int total=fib(n-1)+fib(n-2);
    return total;
}

int main(){
    int total=fib(6);
    printf("%d",total);
    return 0;
}