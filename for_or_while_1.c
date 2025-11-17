//Print sum of all the digits of a number using for loop
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);

    for( ; num>0 ; num=num/10){
        sum=sum+ num%10;
    }
    printf("Sum of the entered number is %d",sum);
}

//Print sum of all the digits of a number using while loop
#include <stdio.h>
int main(){
    long long int num,sum=0;
    printf("Enter number:");
    scanf("%lld",&num);

    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    printf("%lld",sum);
    return 0;

}

