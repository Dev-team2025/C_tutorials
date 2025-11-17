//WAP to check the num is divisible by 5, if yes check it is divisible by 10

#include <stdio.h>
int main() {
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    if(num%5==0){
        printf("Divisible by 5\n");
        if(num%10==0){
            printf("Divisible by 10");
        }
        else{
            printf("Not divisble by 10");
        }
    }
    else{
        printf("Not divisible by 5");
    }
}

    