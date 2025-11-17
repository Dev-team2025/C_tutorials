//Write a funtion to calculate sum of 2 numbers using structures
#include <stdio.h>
struct calculate{
    int a;
    int b;
};

void sum(struct calculate numbers);
void sum(struct calculate numbers){
    int sum;
    sum=numbers.a+numbers.b;
    printf("%d",sum);
}

int main(){
    struct calculate numbers;
    printf("Enter a: ");
    scanf("%d",&numbers.a);
    printf("Enter b: ");
    scanf("%d",&numbers.b);
    sum(numbers);
    return 0;
}