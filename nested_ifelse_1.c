//WAP to check the number is positive or negative and if it is positive check it is odd or even

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num>=0){
        printf("Positive");
        if(num%2==0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
    } 
    
    else{
        printf("Negative");
    }
}