//Use library function to calculate square of a number
#include<stdio.h>

void square(int num);

void square(int num){
    num= num*num;
    //num=pow(num,2);
    printf("Square is %d",num);
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    square(num);
    return 0;
}