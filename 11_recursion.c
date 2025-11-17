//Pritn Hello World 5 times using recursive function
#include<stdio.h>

void HW(int count);

void HW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    HW(count-1);
}

int main(){
    HW(5);
    return 0;
}