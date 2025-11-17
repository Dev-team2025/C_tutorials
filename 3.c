//Print table of n
#include<stdio.h>

void printTable(int n);

void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n", n*i);
    }
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printTable(n);
}