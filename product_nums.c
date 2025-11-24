#include <stdio.h>
int main(){
    int num,product=1;
    printf("Enter number: ");
    scanf("%d",&num);

    for( ;num>0; num=num/10){
        int digit = num%10;
        product=product*digit;
    }
    printf("Product of entered number is %d",product);
    return 0;
}