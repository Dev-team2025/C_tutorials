//WAP to find out factorial of a number using for loop

#include<stdio.h>
int main(){
    int num,fact=1;
    int i;
    printf("Enter a num:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Fact of %d is %d\n",num,fact);
    return 0;

}