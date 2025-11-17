//WAP to reverse the entered number using for loop.
#include <stdio.h>
int main(){
    int num,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for( ; num>0 ; num=num/10){
        reverse=reverse*10 + num%10;
    }
    printf("%d",reverse);
}

//WAP to reverse the entered number using while loop.
#include<stdio.h>
int main(){
    int num,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num>0){
        reverse=reverse*10 + num%10;
        num=num/10;
    }
    printf("%d",reverse);
}
    

